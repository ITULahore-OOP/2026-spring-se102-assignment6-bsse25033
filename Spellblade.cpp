#include "spellBlade.h"

Spellblade::Spellblade(string name, int h, int power, int armor, int mana, int sPower)
: Warrior(name, h, power, armor), 
MagicalEntity(mana, sPower)
{}
Spellblade::~Spellblade()
{
    cout << "Destructor of Spellblade" << endl;
}
int Spellblade::calculateHybridDamage()
{
    return getPower() + getSpellPower();
}