#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

#include "characters.h"

using namespace std;

void OutputCharacters();

vector<Character *> characterList;
Character * charPtr;



int main() {

	string inName, inClase, inWeapon, inMagic;
	int inHealth, inSpeed, inPower;
	int choice;
	Zombie * zomPtr;
	Goblin * gobPtr;


	do {
		bool valid = false;
		while (!valid) {

			cout << "Create a character: \n";
			cout << "1: To enter a Zombie\n";
			cout << "2: To enter a Goblin\n";
			cout << "99: Finish entering\n";


			cout << "Type in a command: ";

			//Check if choice is an integer

			cin >> choice;
			if (cin.fail()) {
				valid = false;
				cout << "The command that you inputted is invalid." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else valid = true;
		}

		switch (choice) {
		case 1:
			inClase = "Zombie";
			cout << "Zombie Name: ";
			cin >> inName;
			cout << "Zombie Health: ";
			cin >> inHealth;
			cout << "Zombie Speed: ";
			cin >> inSpeed;
			cout << "Zombie Weapon: ";
			cin >> inWeapon;
			zomPtr = new Zombie();
			zomPtr->SetName(inName);
			zomPtr->SetClase(inClase);
			zomPtr->SetHealth((inHealth));
			zomPtr->SetSpeed(inSpeed);
			zomPtr->SetWeapon(inWeapon);
			characterList.push_back(zomPtr);
			break;
		case 2:
			inClase = "Goblin";
			cout << "Goblin Name: ";
			cin >> inName;
			cout << "Goblin Health: ";
			cin >> inHealth;
			cout << "Goblin Power: ";
			cin >> inPower;
			cout << "Goblin Magic: ";
			cin >> inMagic;
			gobPtr = new Goblin();
			gobPtr->SetName(inName);
			gobPtr->SetClase(inClase);
			gobPtr->SetHealth((inHealth));
			gobPtr->SetPower(inPower);
			gobPtr->SetMagic(inMagic);

			characterList.push_back(gobPtr);
			break;
		default:
			break;
		}
	} while (choice != 99);

	if (characterList.size()) OutputCharacters();

	system("pause");

	return 0;
}

void OutputCharacters() {
	cout << "\nThese are the characters: " << endl;
	for (unsigned int i = 0; i < characterList.size(); i++) {
		charPtr = characterList[i];
		charPtr->PrintInfo(true);
	}
}