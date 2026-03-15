#ifndef WARRIOR_H
#define WARRIOR_H
#include "hero.h"

class Warrior : public Hero
{
    private: // attributes
    int armorRating;
    public:
    // constructor and destructor
    Warrior(string name, int h, int power, int armor);
    ~Warrior();
    // getter
    int getArmor();
    // functions
    int calculateEffectiveHealth();
};
#endif