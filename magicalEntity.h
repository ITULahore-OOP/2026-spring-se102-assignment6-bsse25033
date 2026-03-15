#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity
{
    private:
    int manaPool;
    int spellPower;
    public:
    MagicalEntity(int mana, int sPower);
    ~MagicalEntity();
    int getMana();
    int getSpellPower();
};

#endif 