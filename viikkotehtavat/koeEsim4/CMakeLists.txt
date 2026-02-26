cmake_minimum_required(VERSION 3.16)

project(koeEsim4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(koeEsim4 main.cpp
    solmu.h solmu.cpp
    lista.h lista.cpp)

include(GNUInstallDirs)
install(TARGETS koeEsim4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
