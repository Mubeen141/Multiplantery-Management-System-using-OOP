#pragma once
#include "Cities.h"
#include<iostream>
using namespace std;
class Jedi: public Cities
{
protected:
	int JediID;
	string JediName;
	string JDOB;
	string Jedimainpower;
	string Jedilightsabercolor;
public:
	Jedi();
	Jedi(int, string, string, string, string);
	void setJedis(int, string, string, string, string);
	int getJedis();
	void PrintJedis();
};

