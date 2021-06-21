#pragma once
#include "Cities.h"
using namespace std;
class Sith : public Cities
{
protected:
	int SithID;
	string SithName;
	string SDOB;
	string Sithmainpower;
	string Sithlightsabercolor;
public:
	Sith();
	Sith(int, string, string, string, string);
	void setSith(int, string, string, string, string);
	int getSith();	
	void PrintSiths();
};
