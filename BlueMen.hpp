#ifndef BlueMen_HPP
#define BlueMen_HPP

#include "Character.hpp"

class BlueMen : public Character {

	protected:

		int numDefensiveDie = 0;

	public:

		BlueMen();
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
		int getNumDefensiveDie();
		~BlueMen();
	};

#endif
