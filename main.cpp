#include <cstring>
#include <iostream>

#include "incl/Session.h"

int main(int argc, char* args[]) {
    try {
        const char* path = argc == 2 ? args[1] : "Models/cube.3de";
        std::cout << path << std::endl;
        Session s(path);
        s.run();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return 0;
}