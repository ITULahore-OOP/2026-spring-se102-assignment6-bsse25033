#include "hero.h"

Hero::Hero(string name, int h, int power)
{
    heroName = name;
    health = h;
    basePower = power;
}
Hero::~Hero()
{
    cout << "Destructor of Hero" << endl;
}
string Hero::getName() const
{
    return heroName;
}
int Hero::getHealth() const
{
    return health;
}
int Hero::getPower() const
{
    return basePower;
}
void Hero::takeDamage(int damage)
{
    health = health - damage;
    if (health < 0)
        health = 0;
}
bool Hero::operator>(const Hero& other) const
{
    return this->basePower > other.basePower;
}
int Hero::operator+(const Hero& other) const
{
    return this->health + other.health;
}