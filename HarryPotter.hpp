#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Character.hpp"

class HarryPotter : public Character {

protected:

	
	
public:

    HarryPotter();
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
    ~HarryPotter();
};

#endif
