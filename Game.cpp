/**************************************************************************************************
** Program:       Game Class contains the constructor, destruction, menus, and game functions for
**                the Fantasy Combat game.
** Author:        Roger Hill                                                                                           
** Date:          11/10/2019                                                                                            
** Description:   This file contains the constructor, destructor, and the following functions:
**                startMenu, createCharacter1, createCharacter2, attackDamage, twoCharacterCombat,
**                endMenu, and intChoice.	   
**************************************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>      
#include <cstdlib>      

#include "Game.hpp" 

using std::string;
using std::cout;
using std::cin;
using std::endl;


/**************************************************************************************************
** The Game class constructor calls the startMenu, and gets user choices for the Fantasy Combat 
** Character 1 and Character 2.  The function then calls the twoCharacterCombat function, and the 
** endMenu to prompt the user to continue playing or exit the game.                                                                                                      *
** Parameters:  None.                                                                                                     
** Returns:  None.                                                                                                        
**************************************************************************************************/

Game::Game() {

	do {

	startMenu();
	
	character1 = intChoice(1, 5, "Character1 choice ", 1);
	createCharacter1(character1);    // create object for character one
	
	character2 = intChoice(1, 5, "Character2 choice ", 1);
	createCharacter2(character2);    // create object for character two

	twoCharacterCombat();

	cout << endl << "Press Enter to return to menu. ";
	cin.get();
	cin.clear();

	endMenu();                       // choose another round, or exit 
	endChoice = intChoice(1, 2, "Enter choice ", 1);

	if (endChoice == 2) {

		cout << endl << "GoodBye! " << endl;
	}

	} while (endChoice != 2);

}

/**************************************************************************************************
** The twoCharacterCombat function executes to Attacks per Round, and calls the charAttack, and 
** charDefense member fuctions to get Random Die Rolls from each of Attacker1, Defender1, 
** Attacker2, and Defender2.    The  two character combat ends when one of the Character strength-
** points is less than or equal to 0. Checks are made for Hogwarts if HarryPotter is the defender 
** in his first life,and his strength reaches 0 or below.  The Medusa Glare is called when the
** attacker is Medusa, and the attacker Die Roll = 12.  The Mob function reduces the BlueMen 
** defensive Die Roll by 1 for each reduction of 4 strengthPoints.  The Vampire Charm prevents the
** Vampire defender from being attacked if the function returns a random 1.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Game::twoCharacterCombat() {

	do {

		system("cls");

		cout << "****************************************************************************" << endl;
		cout << "**                                                                        **" << endl;
		cout << "**               ****** Fantasy Combat results *****                      **" << endl;
		cout << "**                                                                        **" << endl;
		cout << "****************************************************************************" << endl;
		cout << endl;

// Attack one parameters
		attacker1Name = pCharacter1->getName();
		defender1Name = pCharacter2->getName();

		defender1Armor = pCharacter2->getArmor();
		defender1Strength = pCharacter2->getStrength();


// Check for Vampire Charm		
		if ((defender1Name == "Vampire") && (pCharacter2->getCharm() == 1)) {
		
cout << endl<< "****** The Vampire Charmed its opponent, and didn't get Attacked! ******" << endl<<endl;

			cout << "Attacker one - " << "(" << attacker1Name << ")" << endl;
			cout << "Defender one - " << "(" << defender1Name << ") Armor: " \
				<< defender1Armor << ", strengthPoints: " \
				<< defender1Strength << endl << endl;
		}

		else {

			defender1Armor = pCharacter2->getArmor();
			defender1Strength = pCharacter2->getStrength();

			cout << "Attacker one - " << "(" << attacker1Name << ")" << endl;
			cout << "Defender one - " << "(" << defender1Name << ") Armor: " \
				<< defender1Armor << ", strengthPoints: " \
				<< defender1Strength << endl << endl;

// Attack one Die Rolls
			attacker1Roll = pCharacter1->charAttack();
			defender1Roll = pCharacter2->charDefense();

			attack1Damage = attackDamage(attacker1Roll, defender1Roll, defender1Armor);  

			newDefender1Strength = defender1Strength - attack1Damage;
			pCharacter2->setStrength(newDefender1Strength);
			defender1Strength = pCharacter2->getStrength();

			cout << "Attacker one Die Roll: " << attacker1Roll << endl;
			cout << "Defender one Die Roll: " << defender1Roll << endl;
			cout << "attack1Damage: " << attack1Damage << endl;

		}

// Check for HarryPotter HogWarts
		if (((defender1Name == "HarryPotter") && (defender1Strength <= 0) \
			&& (HarryPotterDeath == 0))) {

			cout << endl << "****** Harry Potter recovered his Strength! ******" << endl;
			pCharacter2->Hogwarts();
			defender1Strength = pCharacter2->getStrength();

			HarryPotterDeath++;

		}

		cout << endl << "Defender one strength: " << defender1Strength << endl << endl;


// Check for the BlueMen Mob
		if ((defender1Name == "BlueMen") && (defender1Strength != 12) \
			&& (defender1Strength % 4 == 0) && (defender1Strength != 0)) {

			cout << "****** The Blue Men have lost a Defensive Die! ******" << endl << endl;
			pCharacter2->Mob();

		}

// Check for the Medusa Glare
		if (((attacker1Name == "Medusa") && (defender1Name != "Medusa")) && (attacker1Roll == 12) \
			&& (defender1Name != "HarryPotter")) {

			cout << "****** The Target turned to Stone, and Medusa Wins!! ******" << endl << endl;
			pCharacter2->Glare();

		}

		else if ((attacker1Name == "Medusa") && (attacker1Roll == 12) \
			&& (defender1Name == "HarryPotter") && (HarryPotterDeath == 0)) {

		cout <<"****** Harry Potter comes back to life with the Medusa Glare! ******" <<endl<<endl;
			pCharacter2->setStrength(20);

		}


// Attack two parameters
		attacker2Name = pCharacter2->getName();
		defender2Name = pCharacter1->getName();

		defender2Armor = pCharacter1->getArmor();
		defender2Strength = pCharacter1->getStrength();

// Check for Vampire Charm		
		if ((defender2Name == "Vampire") && (pCharacter1->getCharm() == 1)) {

cout <<endl<<"****** The Vampire Charmed its opponent, and didn't get Attacked! ******" <<endl<<endl;

			cout << "Attacker two - " << "(" << attacker2Name << ")" << endl;
			cout << "Defender two - " << "(" << defender2Name << ") Armor: " \
				<< defender2Armor << ", strengthPoints: " \
				<< defender2Strength << endl << endl;
		}
		else {

			defender2Armor = pCharacter1->getArmor();
			defender2Strength = pCharacter1->getStrength();

			cout << "Attacker two - " << "(" << attacker2Name << ")" << endl;
			cout << "Defender two - " << "(" << defender2Name << ") Armor: " \
				<< defender2Armor << ", strengthPoints: " \
				<< defender2Strength << endl << endl;

// Attack one Die Rolls
			attacker2Roll = pCharacter2->charAttack();
			defender2Roll = pCharacter1->charDefense();

			attack2Damage = attackDamage(attacker2Roll, defender2Roll, defender2Armor);  

			newDefender2Strength = defender2Strength - attack2Damage;
			pCharacter1->setStrength(newDefender2Strength);
			defender2Strength = pCharacter1->getStrength();

			cout << "Attacker two Die Roll: " << attacker2Roll << endl;
			cout << "Defender two Die Roll: " << defender2Roll << endl;
			cout << "attack2Damage: " << attack2Damage << endl;

		}

// Check for HarryPotter HogWarts
		if (((defender2Name == "HarryPotter") && (defender2Strength <= 0) \
			&& (HarryPotterDeath == 0))) {

			cout << endl << "****** Harry Potter recovered his Strength! ******" << endl;
			pCharacter1->Hogwarts();
			defender2Strength = pCharacter1->getStrength();

			HarryPotterDeath++;

		}
		
		cout << endl << "Defender two strength: " << defender2Strength << endl << endl;

// Check for the BlueMen Mob
		if ((defender2Name == "BlueMen") && (defender2Strength != 12) \
			&& (defender2Strength % 4 == 0) && (defender2Strength != 0)) {

			cout << "****** The Blue Men have lost a Defensive Die! ******" << endl << endl;
			pCharacter1->Mob();

		}

// Check for the Medusa Glare
		if (((attacker2Name == "Medusa") && (defender2Name != "Medusa")) \
			&& (attacker2Roll == 12) && (defender2Name != "HarryPotter")) {

			cout << "****** The Target turned to Stone, and Medusa Wins!! ******" << endl << endl;
			pCharacter1->Glare();

		}

		else if ((attacker2Name == "Medusa") && (attacker2Roll == 12) \
			&& (defender2Name == "HarryPotter") && (HarryPotterDeath == 0)) {

		cout <<"****** Harry Potter comes back to life with the Medusa Glare! ******"<<endl<<endl;
			pCharacter1->setStrength(20);

		}

		cout << endl << "Press Enter for next round. ";
		cin.get();
		cin.clear();

		if (defender1Strength <= 0) {

			cout << endl << "Defender One has died!" << endl;

			delete pCharacter1;
			delete pCharacter2;
		}
		else if (defender2Strength <= 0) {

			cout << endl << "Defender Two has died!" << endl;

			delete pCharacter1;
			delete pCharacter2;
		}

	} while( ((defender1Strength > 0) && (defender2Strength > 0)) );

}

/**************************************************************************************************
** The attackDamage function returns the damage result from each Die Roll according to the formula:
** damage = Attacker(Die Roll) - Defender(Die Roll) - Defender(Armor).
** Parameters:  None.
** Returns:
**************************************************************************************************/

int Game::attackDamage(int attackerRoll, int defenderRoll, int defenderArmor) {

	damage = attackerRoll - defenderRoll - defenderArmor;

	if (damage <= 0) {
		return 0;
	}
	else {
		return damage;
	}
}

/**************************************************************************************************
**  The endDisplay function displays Menu options for:  1) Play again, and 2) Exit.                                
**  Parameters:  None                                                                                              
**  Returns: None                                                                                                  
**************************************************************************************************/

void Game::endMenu() {

	system("cls");

	cout << endl << "1.  Play again \n";
	cout << "2.  Exit the game \n\n";
}

/**************************************************************************************************
** The startMenu function welcomes the user, and lists the five choices for the Fantasy Combat 
** characters.
** Parameters:  None.
** Returns:
**************************************************************************************************/

void Game::startMenu() {

	system("cls");

	cout << "****************************************************************************" << endl;
	cout << "**                                                                        **" << endl;
	cout << "**             *** Welcome to the Fantasy Combat Game ***                 **" << endl;
	cout << "**                                                                        **" << endl;
	cout << "**                                                                        **" << endl;
	cout << "**  This game tests the strength, durabily, and defensive capabilities    **" << endl;
	cout << "**       of Vampire, BlueMen, Medusa, Barbarian, and Harry Potter         **" << endl;
	cout << "**                characters in head to head matchups.                    **" << endl;
	cout << "**                                                                        **" << endl;
	cout << "****************************************************************************" << endl;
	cout << endl << "Please choose two characters for each round." << endl << endl;
	cout << "1. Vampire. " << endl;
	cout << "2. BlueMen. " << endl;
	cout << "3. Medusa. " << endl;
	cout << "4. Barbarian. " << endl;
	cout << "5. Harry Potter. " << endl << endl;

}

/**************************************************************************************************
 ** The intChoice function for validating integer input values between loRange, and hiRange       
 ** Parameters:  None.                                                                             
 ** Returns: int between loRange, and hiRange                                                      
 *************************************************************************************************/

int Game::intChoice(int loRange, int hiRange, string message, int size) {

	int choice = 0,
		inputSize = 0,
		nextCharacter = 0;

	while ((cin.fail()) || (!((choice >= loRange) && (choice <= hiRange))) || (inputSize > size) \
		|| ((nextCharacter < 48) && (nextCharacter > 57)) || (nextCharacter != 10)) {

		cin.clear();

		cout << endl << message << ": ";
		cin >> choice;

		nextCharacter = cin.peek();
		size = log10(choice) + 1;
		cin.clear();
		cin.ignore(1000, '\n');

	}
	return choice;
}

/**************************************************************************************************
**  The createCharacter1 function creates a new dynamic object for Character1
**  Parameters:  None                                                                                              
**  Returns: None                                                                                                  
**************************************************************************************************/

void Game::createCharacter1(int choice) {

	if (choice == 1) {
		pCharacter1 = new Vampire();

	}
	if (choice == 2) {
		pCharacter1 = new BlueMen();

	}
	if (choice == 3) {
		pCharacter1 = new Medusa();

	}
	if (choice == 4) {
		pCharacter1 = new Barbarian();

	}
	if (choice == 5) {
		pCharacter1 = new HarryPotter();

	}
}

/**************************************************************************************************
**  The createCharacter2 function creates a new dynamic object for Character2                                   
**  Parameters:  None                                                                                           
**  Returns: None                                                                                                
**************************************************************************************************/

void Game::createCharacter2(int choice) {

	if (choice == 1) {
		pCharacter2 = new Vampire();

	}
	if (choice == 2) {
		pCharacter2 = new BlueMen();

	}
	if (choice == 3) {
		pCharacter2 = new Medusa();

	}
	if (choice == 4) {
		pCharacter2 = new Barbarian();

	}
	if (choice == 5) {
		pCharacter2 = new HarryPotter();

	}
}
 
/**************************************************************************************************
** The Game class destructor                                                                                          
** Parameters:  None.                                                                                                 
** Returns:  None.                                                                                                    
**************************************************************************************************/

 Game::~Game() {
	 
	 delete pCharacter1;
	 delete pCharacter2;

 }
