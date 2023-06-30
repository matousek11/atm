#include "AtmConsole.h"
#include <iostream>

void AtmConsole::withdraw()
{
    std::cout << "withdraw";
}

void AtmConsole::login(){
    std::cout << "Welcome in ATM." << std::endl;
    std::cout << "Enter your pin:" << std::endl;
    int pin = 0;
    std::cin >> pin;
    std::cout << pin;
}