#ifndef GAME_HPP
#define GAME_HPP

#include "Character.hpp"
#include "Medusa.hpp"
#include "BlueMen.hpp"
#include "Vampire.hpp"
#include "HarryPotter.hpp"
#include "Barbarian.hpp"

#include <string>
using std::string;

class Game {

protected:

	int endChoice = 0;
	int harryPotterLifes = 0;
	Character* pCharacter1 = nullptr;
	Character* pCharacter2 = nullptr;
	int character1 = 0;
	int character2 = 0;
	string attacker1Name = " ";
	string defender1Name = " ";
	int defender1Armor = 0;
	int defender1Strength = 0;
	int attacker1Roll = 0;
	int defender1Roll = 0;
	string attacker2Name = " ";
	string defender2Name = " ";
	int defender2Armor = 0;
	int defender2Strength = 0;
	int attacker2Roll = 0;
	int defender2Roll = 0;
	int damage = 0;
	int attack1Damage = 0;
	int attack2Damage = 0;
	int newDefender1Strength = 0;
	int newDefender2Strength = 0;
	int vampireCharm = 0;
	int HarryPotterDeath = 0;
 
public:

       Game();
	   void startMenu();
	   void endMenu();
	   void createCharacter1(int);
	   void createCharacter2(int);
	   int attackDamage(int attackerRoll, int defenderRoll, int defenderArmor);
	   void twoCharacterCombat();
	   int intChoice(int, int, string, int);
       ~Game();
};

#endif
