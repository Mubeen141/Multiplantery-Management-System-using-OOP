#pragma once
#include "Planets.h"
#include <string>
using namespace std;
class Cities:public Planets
{
protected:
	int CityID;
	string CityName;
	int CityPop;
	string CaptureStatus;

public:
	Cities();
	Cities(int,string,int,string);
	void setCities(string, int, string);
	void setCityID(int);
	int getCityData();
	int getCityID();
	void PrintCities();
};


