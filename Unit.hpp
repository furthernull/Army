#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>

class Unit {
    protected:
        std::string title;
        int hp;
        int maxHP;
        int dmg;

    public:
        Unit(const std::string& title, int maxHP, int dmg);
        virtual ~Unit();

        virtual const std::string getTitle() const;
        virtual int getHP() const;
        virtual int getMaxHP() const;
        virtual int getDmg() const;

        virtual void takeDamage(int damage);

        virtual void attack(Unit* enemy) = 0;
        virtual void counterAttack(Unit* enemy) = 0;
};

#endif