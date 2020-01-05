/**************************************************************************************************
** Program:       BlueMen Class functions, constructor, and destructor.                                                 
** Author:        Roger Hill                                                                                           
** Date:          11/12/2019                                                                                            
** Description:   This file contains the BlueMen class constructor, destructor, and member 
**                functions.          
** Citation:      https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-
**                derived-classes/              
**************************************************************************************************/

#include "BlueMen.hpp" 

/**************************************************************************************************
** The BlueMen default constructor sets the attributes of the BlueMen Character
** for the BlueMens.                                                                             
** Parameters:
** Returns:  None.
**************************************************************************************************/

BlueMen::BlueMen() {

	this->name = "BlueMen";
	this->armor = 3;
	this->strengthPoints = 12;
	this->numDefensiveDie = 3;

}

/**************************************************************************************************
** The getName function returns the name of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

string BlueMen::getName() {

	return name;

}

/**************************************************************************************************
** The Glare function sets strengthPoints to 0 for defender being attacked from Medusa with Die
** Roll == 12.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void BlueMen::Glare() {

	this->strengthPoints = 0;

 }

/**************************************************************************************************
** The Mob function decrements the Number of Defensive Die of the BlueMen.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void BlueMen::Mob() {

	numDefensiveDie--;

}

/**************************************************************************************************
** The getNumDefensiveDie function is only overriden in the BlueMen class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int BlueMen::getNumDefensiveDie() {

	return numDefensiveDie;

}

/**************************************************************************************************
** The Hogwarts function is only overriden in the HarryPotter class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void BlueMen::Hogwarts() {
	
}

/**************************************************************************************************
** The getCharm function is only overriden in the Medusa class.
** Parameters:  None.
** Returns:
**************************************************************************************************/

int BlueMen::getCharm() {

	return 0;

}

/**************************************************************************************************
** The setStrength function sets the strengthPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

void BlueMen::setStrength(int newStrength) {

	this->strengthPoints = newStrength;

}

/**************************************************************************************************
** The getStrength function returns the strenghPoints of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int BlueMen::getStrength() {

	return strengthPoints;

}

/**************************************************************************************************
** The getArmor function returns the armor value of the Character
** Parameters:  None.
** Returns:
**************************************************************************************************/

int BlueMen::getArmor() {

	return armor;
}

/**************************************************************************************************
** The charAttack function returns the Attack Die Roll for the Character.                                                           
** Parameters:  None.                                                                                                       
** Returns:                                                                          
**************************************************************************************************/

int BlueMen::charAttack() {

	rollResult = 0;

	this->numDie = 2;
	this->numDieSides = 10;

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

int BlueMen::charDefense() {

	rollResult = 0;

	//this->numDie = 3;
	this->numDieSides = 6;

	for (int i = 0; i < numDefensiveDie; i++) {
		rollResult += rand() % numDieSides + 1;
	}

	return rollResult;

}

/**************************************************************************************************
** The BlueMen class default destructor.                                                                                 
** Parameters:  None.                                                                                                    
** Returns:  None.                                                                                                       
**************************************************************************************************/

 BlueMen::~BlueMen() {

 }
 
 




