/**************************************************************************************************
** Program:       Barbarian Class functions, constructor, and destructor.                                                 
** Author:        Roger Hill                                                                                           
** Date:          10/30/2019                                                                                            
** Description:   This file contains the Barbarian class constructor, destructor, and member
**                functions.             
** Citation:      https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-
**                derived-classes/              
**************************************************************************************************/

#include "Barbarian.hpp" 

/**************************************************************************************************
** The Barbarian default constructor sets the attributes of the Vampire Character
** for the Barbarians.
** Parameters:
** Returns:  None.
**************************************************************************************************/

Barbarian::Barbarian() {

	this->name = "Barbarian";
	this->armor = 0;
	this->strengthPoints = 12;

}

/**************************************************************************************************
** The getName function returns the name of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

string Barbarian::getName() {

	return name;

}

/**************************************************************************************************
** The Glare function sets strengthPoints to 0 for defender being attacked from Medusa with Die
** Roll == 12.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Barbarian::Glare() {

	this->strengthPoints = 0;

}

/**************************************************************************************************
** The getNumDefensiveDie function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Barbarian::getNumDefensiveDie() {

	return 0;

}

/**************************************************************************************************
** The Mob function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Barbarian::Mob() {

}

/**************************************************************************************************
** The Hogwarts function is only overriden in the HarryPotter class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Barbarian::Hogwarts() {

}

/**************************************************************************************************
** The getCharm function is only overridden in the Vampire class
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Barbarian::getCharm() {

	return 0;
}

/**************************************************************************************************
** The setStrength function sets the strengthPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Barbarian::setStrength(int newStrength) {

	this->strengthPoints = newStrength;

}
/**************************************************************************************************
** The getStrength function returns the strenghPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Barbarian::getStrength() {

	return strengthPoints;

}

/**************************************************************************************************
** The getArmor function returns the armor value of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Barbarian::getArmor() {

	return armor;
}

/**************************************************************************************************
** The charAttack function function returns the Attack Die Roll for the Character.                                                             
** Parameters:  None.                                                                                                       
** Returns:                                                                          
**************************************************************************************************/

int Barbarian::charAttack() {

	rollResult = 0;

	this->numDie = 2;
	this->numDieSides = 6;
	
	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;
}

/**************************************************************************************************
** The charDefense function function returns the Defense Die Roll for the Character
** Parameters:  None.                                                                                                       
** Returns:                                                                                   
**************************************************************************************************/

int Barbarian::charDefense() {

	rollResult = 0;

	this->numDie = 2;
	this->numDieSides = 6;

	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;

}

/**************************************************************************************************
** The Barbarian class default destructor.                                                                                 
** Parameters:  None.                                                                                                    
** Returns:  None.                                                                                                       
**************************************************************************************************/

 Barbarian::~Barbarian() {

 }
 
 




