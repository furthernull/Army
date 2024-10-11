#include "Unit.hpp"
#include "UnitIsDeadException.hpp"

Unit::Unit(const std::string& title, int maxHP, int dmg) {
    this->title = title;
    this->hp = maxHP;
    this->maxHP = maxHP;
    this->dmg = dmg;
}

Unit::~Unit() {}

const std::string Unit::getTitle() const {
    return this->title;
}

int Unit::getHP() const {
    return this->hp;
}

int Unit::getMaxHP() const {
    return this->maxHP;
}

int Unit::getDmg() const {
    return this->dmg;
}

void Unit::takeDamage(int damage) {
    if (damage >= this->hp) {
        this->hp = 0;
        return;
    }
    this->hp -= damage;
}
