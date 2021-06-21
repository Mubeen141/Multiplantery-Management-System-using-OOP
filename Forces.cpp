#include "Forces.h"
#include"Cities.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Forces::Forces()
{
	Frontline = 0;
	TransportShips = 0;
	FighterPlanes = 0;
	Tanks = 0;
}

Forces::Forces(int frl, int ts, int frp, int t)
{
	this->Frontline = frl;
	this->TransportShips = ts;
	this->FighterPlanes = frp;
	this->Tanks = t;
}

void Forces::setForces(int frl, int ts, int frp, int t)
{
	Frontline = frl;
	TransportShips = ts;
	FighterPlanes = frp;
	Tanks = t;
}

int Forces::getForces()
{
	return Frontline;
	return TransportShips;
	return FighterPlanes;
	return Tanks;
}

void Forces::PrintForces()
{
	string line;
	ifstream myfile("Forces.txt");
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
