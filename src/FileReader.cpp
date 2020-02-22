//
// Created by askar on 11.09.19.
//

#include "../incl/FileReader.h"

FileReader::FileReader(const char *fileName, std::shared_ptr<Model>& model)
    :  mLineCount(0), mModelFile(fileName), mModel(model) {
    if (mModelFile.fail())
        throw NoFileException();
    read();
}

void FileReader::split_line(std::string &line, std::string &instr, std::string &body)  {
    if (line.size() < 5) {
        if (line[0] == '#')
            return;
        else
            throw BadLineException(mLineCount);
    }
    size_t to_trim = line.find_first_not_of(' ');
    line = line.substr(to_trim, line.size() - to_trim);
    instr = line.substr(0, 5);
    body = line.substr(5, line.size() - 5);
}

void FileReader::read() {
    std::string line;
    while (std::getline(mModelFile, line)) {
        mLineCount++;
        std::string instr, body;
        split_line(line, instr, body);
        if(instr[0] == '#')
            continue;
        if (instr == "point")
            point(body);
        else if (instr == "lineC")
            lineC(body);
        else if (instr == "lineP")
            lineP(body);
    }
}

void FileReader::point(std::string& line)  {
    double x, y, z;
    if (sscanf(line.c_str(), " { %lf , %lf , %lf } ", &x, &y, &z) != 3)
        throw BadLineException(mLineCount);
    mModel->add(x, y, z);
}

void FileReader::lineC(std::string &line)  {
    double p1x, p1y, p1z, p2x, p2y, p2z;
    if(sscanf(line.c_str(), " { %lf , %lf , %lf , %lf , %lf , %lf } ", &p1x, &p1y, &p1z, &p2x, &p2y, &p2z) != 6)
        throw BadLineException(mLineCount);
    mModel->add(std::make_shared<Line>(p1x, p1y, p1z, p2x, p2y, p2z));
}

void FileReader::lineP(std::string &line)  {
    double p1x, p1y, p1z, p2x, p2y, p2z;
    if(sscanf(line.c_str(), " { { %lf , %lf , %lf } , { %lf , %lf , %lf } } ",
            &p1x, &p1y, &p1z, &p2x, &p2y, &p2z) != 6)
        throw BadLineException(mLineCount);
    mModel->add(std::make_shared<Point>(p1x, p1y, p1z), std::make_shared<Point>(p2x, p2y, p2z));
}
