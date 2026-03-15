#include "guild.h"

Guild::Guild(string name)
{
    guildName = name;
    memberCount = 0;
    for (int i = 0; i < 15; i++)
    roster[i] = nullptr;
}
int Guild::calculateTotalGuildPower()
{
    int totalPower = 0;
    for (int i = 0; i < memberCount; i++)
    {
        totalPower += roster[i]->getPower();
    }
    return totalPower;
}
void Guild::displayGuildStats()
{
    cout << guildName << endl;
    cout << "Members: " << memberCount << "/15" << endl;
    cout << "Total Power: " << calculateTotalGuildPower() << endl;
}
void Guild::operator+=(Hero* newHero)
{
    if (memberCount < 15)
    {
        roster[memberCount] = newHero;
        memberCount++;
    }
    else
    {
        cout << "Guild is at full capacity." << endl;
    }
}
ostream& operator<<(ostream& os, const Guild& guild)
{
    os << "Guild:" << guild.guildName << endl;
    for(int i = 0; i < guild.memberCount; i++)
    {
        os << "Member " << i + 1 << ": " << guild.roster[i]->getName() << " (Power: " << guild.roster[i]->getPower() << ", Health: " << guild.roster[i]->getHealth() << ")" << endl;
    }
    return os;
}
Guild::~Guild()
{
    for (int i = 0; i < memberCount; i++)
    {
        if(roster[i] != nullptr)
        delete roster[i];
        roster[i] = nullptr;
    }
    cout << "The Guild " << guildName << " has been disbanded." << endl;
}
