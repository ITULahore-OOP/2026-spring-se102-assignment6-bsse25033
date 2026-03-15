#ifndef KNIGHT_H
#define KNIGHT_H
#include "warrior.h"

class Knight : public Warrior
{
    private:// attributes
    int chargeBonus;
    public:
    // constructor and destructor
    Knight(string name, int h, int power, int armor, int charge);
    ~Knight();
    // getters
    int getChargeBonus();
    // functions
    int calculateBurstDamage();
};
#endif