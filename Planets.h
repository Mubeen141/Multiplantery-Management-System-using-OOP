#pragma once
#include<iostream>
#include<string>
using namespace std;
class Planets
{
protected:
	int PlanetID;
	string PlanetName;
	int NoofCities;
	int TotalPop;
	string Status;
	string BaseshipName;

public:
	Planets();
	Planets(int, string, int, int, string, string);
	void setPlonets(string, int, int, string, string);
	void setPlanetID(int pi);
	int getPlanetData();
	int getPlanetID();
	void PrintPlanets();

};
