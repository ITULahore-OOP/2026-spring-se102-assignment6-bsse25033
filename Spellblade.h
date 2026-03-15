#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "warrior.h"
#include "magicalEntity.h"

class Spellblade : public Warrior, public MagicalEntity
{
    public:
    // constructor and destructor
    Spellblade(string name, int h, int power, int armor, int mana, int sPower);
    ~Spellblade();
    // functions
    int calculateHybridDamage();
};
#endif