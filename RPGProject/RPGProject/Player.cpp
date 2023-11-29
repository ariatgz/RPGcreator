#include"Player.h"
#include<string>
#include<iostream>

using namespace std;

Player::Player(string name, Race race, int hitpoints, int magicPoints) {


	this -> name = name;
	this -> race = race;
	this -> hitpoints = hitpoints;
	this ->magicPoints = magicPoints;

};
string Player::getName() const {

	return this->name;

};
Race Player::getRace() const {

	return this->race;

};
int Player::getMagicPoints() const {

	return this->magicPoints;

};
int Player::getHitPoints() const {

	return this->hitpoints;

};
void Player::setName(string name) {

	this -> name = name;

};
void Player::setRace(Race race) {

	this->race = race;
};
void Player::setHitPonts(int hitPoints) {

	this->hitpoints = hitPoints;
};
void Player::setMagicPoints(int magicPoints) {

	this->magicPoints = magicPoints;
};
string Player::whatRace() {

	Race myRace = this->race;

	if (myRace == HUMAN) {
		return "Human";
	}
	else if (myRace == ELF) {

		return "Elf";
	}
	else if (myRace == DWARF) {

		return "Dwarf";
	}
	else if (myRace == ORC) {

		return "Orc";
	}
	else if (myRace == TROLL) {

		return "Troll";
	}


};
