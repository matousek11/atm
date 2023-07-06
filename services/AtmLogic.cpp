#include "AtmLogic.h"
#include <iostream>
#include <cmath>

AtmLogic::AtmLogic()
{
    int newArray[6] = {100, 200, 500, 1000, 2000, 5000};
    for (int i = 0; i < 6; i++)
    {
        this->moneyArray[i] = newArray[i];
        this->moneyToReturn[i] = 0;
    }
}

int AtmLogic::checkPin(int pin)
{
    if (this->pin == pin)
        return 1;
    else
        return 0;
}

int *AtmLogic::getVariantsOfReturn(int moneyToReturn, int accountBallance, int bankNoteNumber)
{
    int bankNote = this->moneyArray[bankNoteNumber];
    float division = (float)moneyToReturn / bankNote;
    std::cout << division << std::endl;
    if (division > 1 && moneyToReturn > 0)
    {
        int roundDownDivision = std::floor(division);
        int remainingMoneyToReturn = moneyToReturn - roundDownDivision * bankNote;
        std::cout << "remaining money calculation " << remainingMoneyToReturn << std::endl;
        this->moneyToReturn[bankNoteNumber] = roundDownDivision;
        if (bankNoteNumber != 0)
            getVariantsOfReturn(remainingMoneyToReturn, accountBallance, bankNoteNumber - 1);
    }
    else if (division == 1 || bankNoteNumber == 0)
    {
        this->moneyToReturn[bankNoteNumber] = division;
        std::cout << "Money to return:" << std::endl;
        for (int i = 0; i < 6; i++)
        {
            if (this->moneyToReturn[i] != 0)
                std::cout << this->moneyToReturn[i] << " x " << this->moneyArray[i] << std::endl;
        }
    }
    else if (division < 1 && bankNote != 0)
    {
        getVariantsOfReturn(moneyToReturn, accountBallance, bankNoteNumber - 1);
    }
    else
    {
        std::cout << "Unable to return.";
    }
}