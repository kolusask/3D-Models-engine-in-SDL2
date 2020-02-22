cmake_minimum_required(VERSION 3.14)
project(E3D)

set(CMAKE_CXX_STANDARD 17)

link_libraries(SDL2)
add_executable(Engine3D main.cpp incl/constants.h src/Point.cpp incl/Point.h src/Drawable.cpp incl/Drawable.h src/Model.cpp incl/Model.h src/Session.cpp incl/Session.h src/Line.cpp incl/Line.h src/Component.cpp incl/Component.h src/FileReader.cpp incl/FileReader.h)
