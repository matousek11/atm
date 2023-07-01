cmake_minimum_required(VERSION 3.5)
project(ATM VERSION 1.0)
add_executable(AtmSoftware main.cpp services/AtmConsole.cpp services/AtmLogic.cpp objects/User.h)