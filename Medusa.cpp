/**************************************************************************************************
** Program:       Medusa Class functions, constructor, and destructor.                                                 
** Author:        Roger Hill                                                                                           
** Date:          11/12/2019                                                                                            
** Description:   This file contains the Medusa class constructor, destructor, and member 
**                functions.             
** Citation:      https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-
**                derived-classes/              
**************************************************************************************************/

#include "Medusa.hpp" 

/**************************************************************************************************
** The Medusa default constructor sets the attributes of the Medusa Character                                                                
** Parameters:
** Returns:  None.
**************************************************************************************************/

Medusa::Medusa() {

	this->name = "Medusa";
	this->armor = 3;
	this->strengthPoints = 8;

}

/**************************************************************************************************
** The getName function returns the name of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/
string Medusa::getName() {

	return name;

}

/**************************************************************************************************
** The Glare function sets strengthPoints to 0 for defender being attacked from Medusa with Die
** Roll == 12.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Medusa::Glare() {


}

/**************************************************************************************************
** The getNumDefensiveDie function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Medusa::getNumDefensiveDie() {

	return 0;

}

/**************************************************************************************************
** The Mob function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Medusa::Mob() {

}

/**************************************************************************************************
** The Hogwarts function is only overriden in the HarryPotter class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Medusa::Hogwarts() {

}

/**************************************************************************************************
** The getCharm function is only overridden in the Vampire class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Medusa::getCharm() {

	return 0;
}

/**************************************************************************************************
** The setStrength function 
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Medusa::setStrength(int newStrength) {

	this->strengthPoints = newStrength;

}

/**************************************************************************************************
** The getStrength function
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Medusa::getStrength() {

	return strengthPoints;

}

/**************************************************************************************************
** The getArmor function
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Medusa::getArmor() {

	return armor;
}

/**************************************************************************************************
** The charAttack function                                                            
** Parameters:  None.                                                                                                       
** Returns:                                                                          
**************************************************************************************************/

int Medusa::charAttack() {

	rollResult = 0;

	this->numDie = 2;
	this->numDieSides = 6;

	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;
	
}

/**************************************************************************************************
** The charDefense function function 
** Parameters:  None.                                                                                                       
** Returns:                                                                                   
**************************************************************************************************/

int Medusa::charDefense() {

	rollResult = 0;

	this->numDie = 1;
	this->numDieSides = 6;

	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;

}

/**************************************************************************************************
** The Medusa class default destructor.                                                                                 
** Parameters:  None.                                                                                                    
** Returns:  None.                                                                                                       
**************************************************************************************************/

 Medusa::~Medusa() {

 }
 
 




