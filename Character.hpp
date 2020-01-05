#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
using std::string;

class Character {

protected:

	int numDie;
	int numDieSides;
    int attack;
	int defense;
	int armor;
	int strengthPoints; 
	string name;
	int rollResult;
	int charm;
	int hogwarts;
	
	
public:

	Character();
	virtual string getName() = 0;
	virtual int getArmor() = 0;
	virtual void setStrength(int) = 0;
	virtual int getStrength() = 0;
	virtual int getCharm() = 0;
	virtual int charAttack() = 0;
	virtual int charDefense() = 0;
	virtual void Hogwarts() = 0;
	virtual void Mob() = 0;
	virtual void Glare() = 0;
	virtual int getNumDefensiveDie() = 0;
    virtual ~Character();
};

#endif
