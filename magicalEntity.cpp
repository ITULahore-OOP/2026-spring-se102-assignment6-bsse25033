#include "magicalEntity.h"
#include <iostream>
using namespace std;

MagicalEntity::MagicalEntity(int mana, int sPower)
{
    manaPool = mana;
    spellPower = sPower;
}
MagicalEntity::~MagicalEntity()
{
    cout << "Destructor of MagicalEntity" << endl;
}
int MagicalEntity::getMana()
{
    return manaPool;
}
int MagicalEntity::getSpellPower()
{
    return spellPower;
}
