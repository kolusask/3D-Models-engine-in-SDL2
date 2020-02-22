#include <cstring>
#include <iostream>

#include "incl/Session.h"

const char* construct_address(char* arg) {
    if (!arg)
        return "../Models/cube.3de";
    if (arg[0] == '/')
        return arg;
    char* result = new char[strlen(arg) + 4];
    sprintf(result, "../%s", arg);
    return result;
}

int main(int argc, char* args[]) {
    try {
        auto str = construct_address(args[1]);
        Session s(construct_address(args[1]));
        s.run();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return 0;
}