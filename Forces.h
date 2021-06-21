#pragma once
#include "Cities.h"
using namespace std;
class Forces: public Cities
{
protected:
	int Frontline;
	int TransportShips;
	int FighterPlanes;
	int Tanks;
public:
	Forces();
	Forces(int, int, int, int);
	void setForces(int, int, int , int);
	int getForces();
	void PrintForces();
};

