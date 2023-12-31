#include "AtmConsole.h"
#include <iostream>
#include "AtmLogic.h"
#include <vector>

AtmConsole::AtmConsole()
{
}

int AtmConsole::chooseAction()
{
    std::cout << "Select number of action:" << std::endl;
    std::cout << "1-Ballance statement" << std::endl;
    std::cout << "2-Withdraw money" << std::endl;
    std::cout << "3-Insert money" << std::endl;
    int input = 0;
    std::cin >> input;
    return input;
}

void AtmConsole::ballanceStatement()
{
    std::cout << "Your balance is: ";
    std::cout << this->user.balance << " Kč" << std::endl;
}

void AtmConsole::withdraw()
{
    std::cout << "Ballance: " << this->user.balance << " Kč." << std::endl;
    std::cout << "How many do you want to withdraw? ";
    int moneyToWithdraw = 0;
    std::cin >> moneyToWithdraw;
    if (moneyToWithdraw > this->user.balance)
        std::cout << "You don't have enough money to withdraw " << moneyToWithdraw << " Kč.";
    else
    {
        this->_atmLogic.getVariantsOfReturn(moneyToWithdraw, this->user.balance, 5);
    }
}

void AtmConsole::insertMoney()
{
    std::cout << "Insert money" << std::endl;
    std::cout << "How many do you want to insert? ";
    int newMoney = 0;
    std::cin >> newMoney;
    this->user.balance = this->user.balance + newMoney;
    std::cout << "New ballance is: " << this->user.balance;
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
    std::cout << std::endl
              << "Welcome " + this->user.name << ", ";
}