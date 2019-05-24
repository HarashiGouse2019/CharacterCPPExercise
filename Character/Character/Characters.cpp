#include <iostream>
#include <iomanip>
#include <string>
#include "characters.h"

using namespace std;

Character::Character() {}
Character::Character(string N, string C, int H) {
	name = N;
	clase = C;
	health = H;
}

string Character::GetName() { return name; }
void Character::SetName(string N) { name = N; }

string Character::GetClase() { return clase; }
void Character::SetClase(string C) { clase = C; }

int Character::GetHealth() { return health; }
void Character::SetHealth(int H) { health = H; }

void Character::PrintInfo() {
	cout << "\nThis is a " << clase << endl;
}

void Character::PrintInfo(bool moreDetail) {
	if (moreDetail) {
		cout << "\nThis is " << name;
		cout << "\nThis character is part of the " << clase << " clase";
		cout << "\nCurrent health is " << health << endl;
	}
	else {
		cout << "\nThis is a " << clase << endl;
	}
}



Zombie::Zombie() {}
Zombie::Zombie(string N, string C, int H, int S, string W)
	: Character::Character(N, C, H) {
	speed = S;
	weapon = W;
}

int Zombie::GetSpeed() { return speed; }
void Zombie::SetSpeed(int S) { speed = S; }

string Zombie::GetWeapon() { return weapon; }
void Zombie::SetWeapon(string W) { weapon = W; }

void Zombie::PrintInfo() {
	cout << "\nThis is a " << clase << endl;
}

void Zombie::PrintInfo(bool moreDetail) {
	if (moreDetail) {
		cout << "\nThis is " << name;
		cout << "\nThis character is part of the " << clase << " clase";
		cout << "\nCurrent health is " << health;
		cout << "\nCurrent Speed is " << speed;
		cout << "\nIt's carrying " << weapon << endl;
	}
	else {
		cout << "\nThis is a " << clase << endl;
	}
}

Goblin::Goblin() {}
Goblin::Goblin(string N, string C, int H, int P, string M)
	: Character::Character(N, C, H) {
	power = P;
	magic = M;
}

int Goblin::GetPower() { return power; }
void Goblin::SetPower(int P) { power = P; }

string Goblin::GetMagic() { return magic; }
void Goblin::SetMagic(string M) { magic = M; }

void Goblin::PrintInfo() {
	cout << "\nThis is a " << clase << endl;
}

void Goblin::PrintInfo(bool moreDetail) {
	if (moreDetail) {
		cout << "\nThis is " << name;
		cout << "\nThis character is part of the " << clase << " clase";
		cout << "\nCurrent health is " << health;
		cout << "\nPower level is at " << power;
		cout << "\nMagic type is " << magic << endl;
	}
	else {
		cout << "\nThis is a " << clase << endl;
	}
}