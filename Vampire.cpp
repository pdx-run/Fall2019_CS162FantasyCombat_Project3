/**************************************************************************************************
** Program:       Vampire Class functions, constructor, and destructor.                                                 
** Author:        Roger Hill                                                                                           
** Date:          11/12/2019                                                                                            
** Description:   This file contains the Vampire class constructor, destructor, and member 
**                functions.
** Citation:      https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-
**                derived-classes/              
**************************************************************************************************/

#include "Vampire.hpp" 

/**************************************************************************************************
** The Vampire default constructor sets the attributes of the Vampire Character
** for the Vampires.                                                                              
** Parameters:
** Returns:  None.
**************************************************************************************************/

Vampire::Vampire() {

	this->name = "Vampire";
	this->armor = 1;
	this->strengthPoints = 18;

}

/**************************************************************************************************
** The getName function returns the name of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/
string Vampire::getName() {

	return name;
}

/**************************************************************************************************
** The Glare function sets strengthPoints to 0 for defender being attacked from Medusa with Die
** Roll == 12.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Vampire::Glare() {

	this->strengthPoints = 0;

}

/**************************************************************************************************
** The getNumDefensiveDie function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Vampire::getNumDefensiveDie() {

	return 0;

}

/**************************************************************************************************
** The Mob function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Vampire::Mob() {

}

/**************************************************************************************************
** The Hogwarts function is only overriden in the HarryPotter class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Vampire::Hogwarts() {

}

/**************************************************************************************************
** The getCharm function returns a random number 0 or 1 for the Vampire Defender.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Vampire::getCharm() {

	return rand() % 2;

}

/**************************************************************************************************
** The setStrength function sets the strengthPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Vampire::setStrength(int newStrength) {

	this->strengthPoints = newStrength;

}

/**************************************************************************************************
** The getStrength function returns the strenghPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Vampire::getStrength() {

	return strengthPoints;

}

/**************************************************************************************************
** The getArmor function returns the armor value of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Vampire::getArmor() {

	return armor;
}

/**************************************************************************************************
** The charAttack function returns the Attack Die Roll for the Character.                                                            
** Parameters:  None.                                                                                                       
** Returns:                                                                          
**************************************************************************************************/

int Vampire::charAttack() {

	rollResult = 0;

	this->numDie = 1;
	this->numDieSides = 12;

	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;
	
}

/**************************************************************************************************
** The charDefense function returns the Defense Die Roll for the Character
** Parameters:  None.                                                                                                       
** Returns:                                                                                   
**************************************************************************************************/

int Vampire::charDefense() {

	rollResult = 0;

	this->numDie = 1;
	this->numDieSides = 6;

	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;

}

/**************************************************************************************************
** The Vampire class default destructor.                                                                                 
** Parameters:  None.                                                                                                    
** Returns:  None.                                                                                                       
**************************************************************************************************/

 Vampire::~Vampire() {

 }
 
 




