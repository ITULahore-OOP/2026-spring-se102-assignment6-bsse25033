#ifndef GUILD_H
#define GUILD_H
#include "hero.h"
#include "warrior.h"
#include "knight.h"
#include "spellBlade.h"


class Guild
{
    private:
    string guildName;
    Hero* roster[15];
    int memberCount;
    public:
    Guild(string name);
    ~Guild();

    int calculateTotalGuildPower();
    void displayGuildStats();
    void operator+=(Hero* newHero);
    friend ostream& operator<<(ostream& os, const Guild& guild);
    
};
#endif