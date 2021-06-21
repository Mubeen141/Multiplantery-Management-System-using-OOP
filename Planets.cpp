#include "Planets.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Planets::Planets()
{
	PlanetID = 0;
	PlanetName = " ";
	NoofCities = 0;
	TotalPop = 0;
	Status = " ";
	BaseshipName = " ";
}

Planets::Planets(int pi, string pn, int nc, int tp, string ps, string bsn)
{
	this-> PlanetID = pi;
	this->PlanetName = pn;
	this->NoofCities = nc;
	this->TotalPop = tp;
	this->Status = ps;
	this->BaseshipName = bsn;
}

void Planets::setPlonets(string pn, int nc, int tp, string ps, string bsn)
{
	PlanetName = pn;
	NoofCities = nc;
	TotalPop = tp;
	Status = ps;
	BaseshipName = bsn;
}
void Planets::setPlanetID(int pi) 
{
	PlanetID = pi;
}

int Planets::getPlanetData()
{
	return PlanetID;
	cout << endl;
	return NoofCities;
	cout << endl;
	return TotalPop;
	cout << endl;
}

int Planets::getPlanetID()
{
	return PlanetID;
}

void Planets::PrintPlanets()
{
	string line;
	ifstream myfile("Planets.txt");
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
