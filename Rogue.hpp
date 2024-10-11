#ifndef ROGUE_HPP
#define ROGUE_HPP

#include "Unit.hpp"

class Rogue : public Unit {
    public:
        Rogue(const std::string& title, int maxHP, int dmg);
        virtual ~Rogue();

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Rogue& soldier);

#endif