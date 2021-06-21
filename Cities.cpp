#include "Cities.h"
#include <string>
#include <fstream>
#include"Planets.h"
#include <iostream>
using namespace std;

Cities::Cities()
{
	CityID = 0;
	CityName = "";
	CityPop = 0;
	CaptureStatus = "";
}

Cities::Cities(int ci, string cn, int cp, string cs)
{
	this->CityID = ci;
	this->CityName = cn;
	this->CityPop = cp;
	this->CaptureStatus = cs;
}

void Cities::setCities(string cn, int cp, string cs)
{
	CityName = cn;
	CityPop = cp;
	CaptureStatus = cs;
}
void Cities::setCityID(int ci)
{
	CityID = ci;
}

int Cities::getCityData()
{
	return CityPop;
}

int Cities::getCityID()
{
	return CityID;
}

void Cities::PrintCities()
{
	string line;
	ifstream myfile("Cities.txt");
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
