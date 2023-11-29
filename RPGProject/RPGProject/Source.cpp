#include<vector>
#include<iostream>
#include"Mage.h"
#include"Warrior.h"
#include"Priest.h"
#include"Player.h"
using namespace std;
void firstMenu();
void askName();
void askRace();
void askType();
int makeWarrior();
int makePriest();
int makeMage();


vector<Player*> players;

int main() {

	
	bool exitStat = false;
	int option;

	while (!exitStat) {

		firstMenu();
		cin >> option;
		if (option == 2) {
			exitStat = true;
		}
		else if(option == 1)
		{
			askType();
			cin.ignore();
			cin >> option;
			if (option == 1) {
				int status=makeWarrior();
				if (status == 1)
				{
					cout << "Invalid choice." << endl;
					continue;
				}
				else {
					cout << "Player created." << endl;
					continue;
				}

			}
			else if(option == 2)
			{
				int status = makePriest();
				if (status == 1)
				{
					cout << "Invalid choice." << endl;
					continue;
				}
				else {
					cout << "Player created." << endl;
					continue;
				}
			}
			else if (option == 3)
			{
				int status = makeMage();
				if (status == 1)
				{
					cout << "Invalid choice." << endl;
					continue;
				}
				else {
					cout << "Player created." << endl;
					continue;
				}
			}
			else
			{
				cout << "Invalid choice !" << endl;
				continue;
			}


		}
		else
		{
			cout << "Invalid choice!" << endl;
			continue;
		}


	}


	for (int i = 0; i < players.size(); i++)
	{
		cout << "I'm a " << players[i]->whatRace() << " and my attack is: " << players[i]->attack() << endl;
	}


	return 0;
}

void firstMenu() {
	
	cout << "What to do now?" << endl;
	cout << " 1.Build a character" << endl;
	cout << " 2.Exit" << endl;
	
};

void askType() {
	
	cout << "Please choose a Type." << endl;
	cout << " 1.Warrior" << endl;
	cout << " 2.Priest" << endl;
	cout << " 3.Mage" << endl;
	

};

void askName() {
	
	cout << "What will be the Character's name?" << endl;

};
void askRace() {

	cout << "Please choose a race." << endl;
	cout << " 1.Human" << endl;
	cout << " 2.Elf" << endl;
	cout << " 3.DWARF" << endl;
	cout << " 4.ORC" << endl;
	cout << " 5.TROLL" << endl;

};

int makeWarrior() {

	string name;
	Race race;
	int raceNum;
	
	askName();
	cin.ignore();
	getline(cin, name);
	askRace();
	cin >> raceNum;
	if (raceNum == 1) {

		race = HUMAN;
	}
	else if(raceNum == 2)
	{
		race = ELF;
	}
	else if (raceNum == 3)
	{
		race = DWARF;
	}
	else if (raceNum == 4)
	{
		race = ORC;
	}
	else if (raceNum == 5)
	{
		race = TROLL;
	}
	else
	{
		cout << "invalid option!!" << endl;
		return 1;
	}

	Player* newPlayerPtr = new Warrior(name,race);

	players.push_back(newPlayerPtr);

	return 0;



};
int makePriest() {

	string name;
	Race race;
	int raceNum;

	askName();
	cin.ignore();
	getline(cin, name);
	askRace();

	cin >> raceNum;
	if (raceNum == 1) {

		race = HUMAN;
	}
	else if (raceNum == 2)
	{
		race = ELF;
	}
	else if (raceNum == 3)
	{
		race = DWARF;
	}
	else if (raceNum == 4)
	{
		race = ORC;
	}
	else if (raceNum == 5)
	{
		race = TROLL;
	}
	else
	{
		cout << "invalid option!!" << endl;
		return 1;
	}

	Player* newPlayerPtr = new Priest(name, race);

	players.push_back(newPlayerPtr);

	return 0;
};
int makeMage() {

	string name;
	Race race;
	int raceNum;

	askName();
	cin.ignore();
	getline(cin, name);
	askRace();

	cin >> raceNum;
	if (raceNum == 1) {

		race = HUMAN;
	}
	else if (raceNum == 2)
	{
		race = ELF;
	}
	else if (raceNum == 3)
	{
		race = DWARF;
	}
	else if (raceNum == 4)
	{
		race = ORC;
	}
	else if (raceNum == 5)
	{
		race = TROLL;
	}
	else
	{
		cout << "invalid option!!" << endl;
		return 1;
	}

	Player* newPlayerPtr = new Mage(name, race);

	players.push_back(newPlayerPtr);

	return 0;
};
