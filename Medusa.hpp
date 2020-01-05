#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

class Medusa : public Character {

protected:


public:

    Medusa();
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
	void glare();
    ~Medusa();
};

#endif
