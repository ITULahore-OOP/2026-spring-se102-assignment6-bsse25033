#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;

class Hero
{
    private:// attributes
    string heroName;
    int health;
    int basePower;
    public:
    // constructor and destructor
    Hero(string name, int h, int power);
    ~Hero();
    // getters
    string getName()const;
    int getHealth()const;
    int getPower()const;
    void takeDamage(int damage);
    bool operator>(const Hero& other) const;
    int operator+(const Hero& other) const;

};
#endif