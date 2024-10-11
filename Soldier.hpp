#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include "Unit.hpp"

class Soldier : public Unit {
    public:
        Soldier(const std::string& title, int maxHP, int dmg);
        virtual ~Soldier();

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Soldier& soldier);

#endif