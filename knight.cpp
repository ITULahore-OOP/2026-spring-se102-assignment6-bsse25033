#include "knight.h"

Knight::Knight(string name, int h, int power, int armor, int charge) 
: Warrior(name, h, power, armor)
{
    chargeBonus = charge;
}
Knight::~Knight()
{
    cout << "Destructor of Knight" << endl;
}
Knight::getChargeBonus()
{
    return chargeBonus;
}
int Knight::calculateBurstDamage()
{
    return getPower() + chargeBonus;
}