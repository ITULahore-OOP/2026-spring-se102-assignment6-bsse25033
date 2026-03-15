#include "warrior.h"

Warrior::Warrior(string name, int h, int power, int armor) : Hero(name, h, power)
{
    armorRating = armor;
}
Warrior::~Warrior()
{
    cout << "Destructor of Warrior" << endl;
}
int Warrior::getArmor()
{
    return armorRating;
}
int Warrior::calculateEffectiveHealth()
{
    return getHealth() + (armorRating*2);
}
