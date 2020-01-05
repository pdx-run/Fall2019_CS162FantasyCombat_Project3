/**************************************************************************************************
** Program:       Fantasy Combat Game                                                                                        
** Author:        Roger Hill                                                                                        
** Date:          11/12/2019                                                                                       
** Description:   The Fantasy Combat Game is a combat game played between two characters chosen
**                from HarryPotter, Medusa, BlueMen, Barbarian, and Vampires.   Each character
**                type has unique characteristics and attributes.   There are two attacks for each 
**                combat round, and each combat is ended when one of the characters dies.
** Citations:     https://medium.com/@smagid_allThings/uml-class-diagrams-tutorial-step-by-step-
**                520fd83b300b    
**************************************************************************************************/

#include <iostream>
#include <ctime>
#include "Game.hpp"      

using std::cout;
using std::cin;

int main() { 
// Seed the random number generator.
	unsigned seed;
	seed = time(0);
	srand(seed);

// Create the Game object
	Game game;
	game;

    return 0;
}

