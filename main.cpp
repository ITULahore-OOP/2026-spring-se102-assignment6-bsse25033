#include <iostream>
#include "Guild.h"
#include "Knight.h"
#include "Spellblade.h"

using namespace std;

int main() {
    Guild myGuild("Eldoria Protectors");

    Knight* sirAlaric = new Knight("Sir Alaric", 100, 25, 15, 10);
    Spellblade* elara = new Spellblade("Elara Moon", 80, 20, 5, 50, 30);

    myGuild += sirAlaric;
    myGuild += elara;

    cout << "--- Damage Report ---" << endl;
    cout << sirAlaric->getName() << " Burst Damage: " << sirAlaric->calculateBurstDamage() << endl;
    cout << elara->getName() << " Hybrid Damage: " << elara->calculateHybridDamage() << endl;
    cout << "----------------------" << endl << endl;

    cout << myGuild << endl;

    myGuild.displayGuildStats();

    return 0;
}