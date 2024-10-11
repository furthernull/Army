#include "Rogue.hpp"
#include "UnitIsDeadException.hpp"

Rogue::Rogue(const std::string& title, int maxHP, int dmg) : Unit(title, maxHP, dmg) {}

Rogue::~Rogue() {}

void Rogue::attack(Unit* enemy) {
    if (enemy->getHP() == 0) {
        throw UnitIsDeadException();
    }
    enemy->takeDamage(this->dmg);
}

void Rogue::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->dmg/2);
}

std::ostream& operator<<(std::ostream& out, const Rogue& soldier) {
    out << "Unit: " << soldier.getTitle() << ", damage: ";
    out << soldier.getDmg() << std::endl;
    out << "health: (" << soldier.getHP() << "/" << soldier.getMaxHP();
    out << ")" << std::endl;
    return out;
}
