#ifndef ATMCONSOLE_H
#define ATMCONSOLE_H
#include "AtmLogic.h"
#include "../objects/User.h"

class AtmConsole
{
public:
    AtmConsole();
    int chooseAction(void);
    void ballanceStatement(void);
    void insertMoney(void);
    void withdraw(void);
    void login(void);
    User user;

private:
    AtmLogic _atmLogic;
};
#endif