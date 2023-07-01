#include "AtmConsole.h"
#include <iostream>
#include "AtmLogic.h"

AtmConsole::AtmConsole()
{
}

void AtmConsole::withdraw()
{
    std::cout << "withdraw";
}

void AtmConsole::login()
{
    bool correctPin = true;
    int pin = 0;
    std::cout << "Welcome in ATM." << std::endl;

    // check correctness of PIN
    while (correctPin)
    {
        std::cout << "Enter your pin:" << std::endl;
        std::cin >> pin;
        if (this->_atmLogic.checkPin(pin) == 1)
            correctPin = false;
        else
        {
            std::cout << "Incorrect PIN!" << std::endl;
            correctPin = true;
        }
    }
}