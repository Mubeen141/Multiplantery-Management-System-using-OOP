#pragma once
#include "Cities.h"
using namespace std;
class Battles :public Cities
{
protected:
	string BattleName;
	int Damages;
	int Casualties;
public:
	Battles();
	Battles(string, int, int);
	void setBattles(string, int , int);
	int getBattles();
	void PrintBattles();
};

