#ifndef PRIEST_H
#define PRIEST_H

#include"Player.h"
#include<string>

using namespace std;

class Priest : public Player
{
public:
	Priest(string name, Race race) : Player(name, race, 100, 200) {};
	string attack() {
		return "I will assault you with Holy Wrath!";
	};


private:

};



#endif
