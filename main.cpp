#include <iostream>
#include "services/AtmConsole.h"

int main(){
    AtmConsole _atmConsole;
    _atmConsole.login();
    _atmConsole.withdraw();
    std::cin.get();
    std::cin.get();
}