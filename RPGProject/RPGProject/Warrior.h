#ifndef WARRIOR_H
#define WARRIOR_H

#include"Player.h"
#include<string>

using namespace std;

class Warrior : public Player
{
public:
	Warrior(string name, Race race) : Player(name,race,200,0) {};
	string attack() {
		return "I will destroy you with my sword, foul demon!";
	};
	

private:

};



#endif
