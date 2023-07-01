#include <iostream>
#include "services/AtmConsole.h"

int main()
{
    AtmConsole _atmConsole;
    _atmConsole.login();
    int choosedAction = _atmConsole.chooseAction();
    switch (choosedAction)
    {
    case 1:
        _atmConsole.ballanceStatement();
        break;
    case 2:
        _atmConsole.withdraw();
        break;
    case 3:
        _atmConsole.insertMoney();
        break;

    default:
        break;
    }

    std::cout << std::endl
              << "Press any key to exit.";
    std::cin.get();
    std::cin.get();
}