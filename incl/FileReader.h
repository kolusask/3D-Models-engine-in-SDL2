//
// Created by askar on 11.09.19.
//

#ifndef ENGINE3D_FILEREADER_H
#define ENGINE3D_FILEREADER_H

#include <fstream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "Model.h"

struct NoFileException : public std::exception {
    const char* what() const noexcept override {
        return "File not found";
    }
};

struct BadLineException : public std::exception {
    explicit BadLineException(const unsigned lineNum = 0) : mMess((std::string("Error in line ") + std::to_string(lineNum)).c_str()) {}
    const char* what() const noexcept override { return mMess; }
    const char* mMess;
};

class FileReader {
public:
    FileReader(const char* fileName, std::shared_ptr<Model>& model) ;

private:
    void read() ;
    void split_line(std::string& line, std::string& instr, std::string& body) ;
    void point(std::string& line) ;
    void lineC(std::string& line) ;
    void lineP(std::string& line) ;
    unsigned mLineCount;
    std::ifstream mModelFile;
    std::shared_ptr<Model> mModel;
    std::shared_ptr<Model> mStartModel;
};


#endif //ENGINE3D_FILEREADER_H
