#include "Jedi.h"
#include"Cities.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Jedi::Jedi()
{
	JediID = 0;
	JediName = "";
	JDOB = "";
	Jedimainpower = "";
	Jedilightsabercolor = "";
}

Jedi::Jedi(int ji, string jn, string db, string jp, string jl)
{
	this->JediID = ji;
	this->JediName = jn;
	this->JDOB = db;
	this->Jedimainpower = jp;
	this->Jedilightsabercolor = jl;
}

void Jedi::setJedis(int ji, string jn, string db, string jp, string jl)
{
	JediID = ji;
	JediName = jn;
	JDOB = db;
	Jedimainpower = jp;
	Jedilightsabercolor = jl;
}

int Jedi::getJedis()
{
	return JediID;
}


void Jedi::PrintJedis()
{
	string line;
	ifstream myfile("Jedi.txt");
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