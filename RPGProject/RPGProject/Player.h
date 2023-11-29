#ifndef PLAYER_H
#define PLAYER_H


#include<string>
#include<iostream>

using namespace std;

enum Race {HUMAN,ELF,DWARF,ORC,TROLL};

class Player
{
public:
	Player(string name,Race race,int hitpoints,int magicPoints);
	string getName() const;
	Race getRace() const;
	int getMagicPoints() const;
	int getHitPoints() const;
	void setName(string name);
	void setRace(Race race);
	void setHitPonts(int hitPoints);
	void setMagicPoints(int magicPoints);
	string whatRace();
	virtual string attack() = 0;


private:
	string name;
	Race race;
	int hitpoints;
	int magicPoints;

};




#endif
