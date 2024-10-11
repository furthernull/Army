#include "Soldier.hpp"
#include "UnitIsDeadException.hpp"

Soldier::Soldier(const std::string& title, int maxHP, int dmg) : Unit(title, maxHP, dmg) {}

Soldier::~Soldier() {}

void Soldier::attack(Unit* enemy) {
    if (enemy->getHP() == 0) {
        throw UnitIsDeadException();
    }
    enemy->takeDamage(this->dmg);
    enemy->counterAttack(this);
}

void Soldier::counterAttack(Unit* enemy) {
    if (enemy->getHP() == 0) {
        throw UnitIsDeadException();
    }
    enemy->takeDamage(this->dmg/2);
}

std::ostream& operator<<(std::ostream& out, const Soldier& soldier) {
    out << "Unit: " << soldier.getTitle() << ", damage: ";
    out << soldier.getDmg() << std::endl;
    out << "health: (" << soldier.getHP() << "/" << soldier.getMaxHP();
    out << ")" << std::endl;
    return out;
}
