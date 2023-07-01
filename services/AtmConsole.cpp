#include "AtmConsole.h"
#include <iostream>
#include "AtmLogic.h"

AtmConsole::AtmConsole()
{
}

int AtmConsole::chooseAction()
{
    std::cout << "Select number of action:" << std::endl;
    std::cout << "1-Ballance statement" << std::endl;
    std::cout << "2-Withdraw money" << std::endl;
    std::cout << "3-Ballance statement" << std::endl;
    int input = 0;
    std::cin >> input;
    return input;
}

void AtmConsole::ballanceStatement()
{
    std::cout << "balance";
}

void AtmConsole::withdraw()
{
    std::cout << "withdraw";
}

void AtmConsole::insertMoney()
{
    std::cout << "Insert money";
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