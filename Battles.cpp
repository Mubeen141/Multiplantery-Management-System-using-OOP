#include "Battles.h"
#include"Cities.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Battles::Battles()
{
	BattleName = "";
	Damages = 0;
	Casualties = 0;
}

Battles::Battles(string bn, int bd, int bc)
{
	this->BattleName = bn;
	this->Damages = bd;
	this->Casualties = bc;
}

void Battles::setBattles(string bn, int bd, int bc)
{
	this->BattleName = bn;
	this->Damages = bd;
	this->Casualties = bc;
}

int Battles::getBattles()
{
	return Damages;
	return Casualties;
}

void Battles::PrintBattles()
{
	string line;
	ifstream myfile("Battles.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, line);
			cout << line << endl;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}
