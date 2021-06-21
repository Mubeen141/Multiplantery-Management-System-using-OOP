#include "Sith.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Sith::Sith()
{
	SithID = 0;
	SithName = "";
	SDOB = "";
	Sithmainpower = "";
	Sithlightsabercolor = "";
}

Sith::Sith(int si, string sn, string sb, string sp, string sl)
{
	this->SithID = si;
	this->SithName = sn;
	this->SDOB = sb;
	this->Sithmainpower = sp;
	this->Sithlightsabercolor = sl;
}

void Sith::setSith(int si, string sn, string sb, string jp, string sl)
{
	SithID = si;
	SithName = sn;
	SDOB = sb;
	Sithmainpower = jp;
	Sithlightsabercolor = sl;
}

int Sith::getSith()
{
	return SithID;
}


void Sith::PrintSiths()
{
	string line;
	ifstream myfile("Sith.txt");
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