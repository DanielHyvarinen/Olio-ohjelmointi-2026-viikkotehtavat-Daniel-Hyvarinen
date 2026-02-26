cmake_minimum_required(VERSION 3.16)

project(koeEsim2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(koeEsim2 main.cpp
    elain.h elain.cpp
    koira.h koira.cpp)

include(GNUInstallDirs)
install(TARGETS koeEsim2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
