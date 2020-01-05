#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include <iostream>
#include "Character.hpp"

class Barbarian : public Character {

     protected:


     public:
		Barbarian();
		virtual string getName();
		virtual int getArmor();
		virtual void setStrength(int);
		virtual int getStrength();
		virtual int getCharm();
		virtual int charAttack();
		virtual int charDefense();
		virtual void Hogwarts();
		virtual void Mob();
		virtual void Glare();
		virtual int getNumDefensiveDie();
        ~Barbarian();
};

#endif
