/**************************************************************************************************
** Program:       HarryPotter Class functions, constructor, and destructor.                                                 
** Author:        Roger Hill                                                                                           
** Date:          11/12/2019                                                                                            
** Description:   This file contains the HarryPotter class constructor, destructor, and member 
**                functions             
** Citation:      https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-
**                derived-classes/              
**************************************************************************************************/

#include "HarryPotter.hpp" 

/**************************************************************************************************
** The HarryPotter default constructor sets the attributes of the HarryPotter Character
** Parameters:
** Returns:  None.
**************************************************************************************************/

HarryPotter::HarryPotter() {

	this->name = "HarryPotter";
	this->armor = 0;
	this->strengthPoints = 10;

}

/**************************************************************************************************
** The getName function returns the name of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

string HarryPotter::getName() {

	return name;

}

/**************************************************************************************************
** The Glare function sets strengthPoints to 0 for defender being attacked from Medusa with Die
** Roll == 12.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void HarryPotter::Glare() {

	this->strengthPoints = 0;

}

/**************************************************************************************************
** The getNumDefensiveDie function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int HarryPotter::getNumDefensiveDie() {

	return 0;

}

/**************************************************************************************************
** The Mob function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void HarryPotter::Mob() {

}

/**************************************************************************************************
** The Hogwarts function is only overriden in HarryPotter class, and resets HarryPotters strength
** to 20 after first death only.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void HarryPotter::Hogwarts() {

	this->strengthPoints = 20;

}

/**************************************************************************************************
** The getCharm function is only overridden in the Vampire class
** Parameters:  None.
** Returns:
**************************************************************************************************/

int HarryPotter::getCharm() {

	return 0;

}

/**************************************************************************************************
** The setStrength function sets the strengthPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

void HarryPotter::setStrength(int newStrength) {

	this->strengthPoints = newStrength;

}

/**************************************************************************************************
** The getStrength function returns the strenghPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int HarryPotter::getStrength() {

	return strengthPoints;

}

/**************************************************************************************************
** The getArmor function returns the armor value of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int HarryPotter::getArmor() {

	return armor;
}

/**************************************************************************************************
** The charAttack function returns the Attack Die Roll for the Character                                                            
** Parameters:  None.                                                                                                       
** Returns:                                                                          
**************************************************************************************************/

int HarryPotter::charAttack() {

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

int HarryPotter::charDefense() {

	rollResult = 0;

	this->numDie = 2;
	this->numDieSides = 6;

	for (int i = 0; i < numDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;
}

/**************************************************************************************************
** The HarryPotter class default destructor.                                                                                 
** Parameters:  None.                                                                                                    
** Returns:  None.                                                                                                       
**************************************************************************************************/

 HarryPotter::~HarryPotter() {

 }
 
 




