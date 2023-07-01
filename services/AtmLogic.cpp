#include "AtmLogic.h"

int AtmLogic::checkPin(int pin){
    if(this->pin == pin)
        return 1;
    else
        return 0;
}