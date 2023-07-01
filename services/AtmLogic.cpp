#include "AtmLogic.h"

AtmLogic::AtmLogic()
{
    int newArray[6] = {100, 200, 500, 1000, 2000, 5000};
    for (int i = 0; i < 6; i++)
        this->moneyArray[i] = newArray[i];
}

int AtmLogic::checkPin(int pin)
{
    if (this->pin == pin)
        return 1;
    else
        return 0;
}

void AtmLogic::getVariantsOfReturn(int moneyToReturn)
{
}