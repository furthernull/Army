#include <iostream>
#include "Soldier.hpp"
#include "Rogue.hpp"

int main() {
    Soldier* knight = new Soldier("Knight", 100, 20);
    Rogue* barbarian = new Rogue("Barbarian", 80, 30);

    std::cout << *knight << std::endl; // Knight:: hp(100/100), dmg(20)
    std::cout << *barbarian << std::endl; // Barbarian:: hp(80/80), dmg(30)

    knight->attack(barbarian);

    std::cout << *knight << std::endl; // Knight:: hp(85/100), dmg(20)
    std::cout << *barbarian << std::endl; // Barbarian:: hp(60/80), dmg(30)

    return 0;
}
