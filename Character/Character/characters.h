#pragma once
#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>
using namespace std;

//Character class
class Character {
protected:
	string name;
	string clase;
	int health;
public:
	Character();
	Character(string N, string C, int H);
	string GetName();
	void SetName(string N);
	string GetClase();
	void SetClase(string C);
	int GetHealth();
	void SetHealth(int H);
	virtual void PrintInfo();
	virtual void PrintInfo(bool moreDetail);
private:

};

//Zombie class; derives from Character class
class Zombie : public Character {
private:
	int speed;
	string weapon;
public:
	Zombie();
	Zombie(string N, string C, int H, int S, string W);
	int GetSpeed();
	void SetSpeed(int S);
	string GetWeapon();
	void SetWeapon(string W);
	void PrintInfo();
	void PrintInfo(bool moreDetail);
};

//Goblin class; derives from Character class
class Goblin : public Character {
private:
	int power;
	string magic;
public:
	Goblin();
	Goblin(string N, string C, int H, int P, string M);
	int GetPower();
	void SetPower(int P);
	string GetMagic();
	void SetMagic(string M);
	void PrintInfo();
	void PrintInfo(bool moreDetail);
};

#endif