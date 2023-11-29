#ifndef MAGE_H
#define MAGE_H

#include"Player.h"
#include<string>

using namespace std;

class Mage : public Player
{
public:
	Mage(string name, Race race) : Player(name, race, 150, 150) {};
	string attack() {
		return "I will crush you with the power of my arcane missiles!";
	};

	 
private:

};



#endif

