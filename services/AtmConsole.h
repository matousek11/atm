#ifndef ATMCONSOLE_H
#define ATMCONSOLE_H
#include "AtmLogic.h"

class AtmConsole{
    public:
        AtmConsole();
        void withdraw(void);
        void login(void);
    private:
        AtmLogic _atmLogic;
};
#endif