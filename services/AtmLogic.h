#ifndef ATMLOGIC_H
#define ATMLOGIC_H

class AtmLogic
{
public:
    AtmLogic();
    int checkPin(int pin);
    int *getVariantsOfReturn(int moneyToReturn, int accountBallance, int bankNoteNumber);

private:
    int pin = 1234;
    int moneyArray[6];
    int moneyToReturn[6];
};
#endif