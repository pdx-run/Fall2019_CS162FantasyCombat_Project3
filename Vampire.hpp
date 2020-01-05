#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Character.hpp"

class Vampire : public Character {

protected:

	int charmValue = 0;

public:

    Vampire();
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
	void charm();
    ~Vampire();
};

#endif
