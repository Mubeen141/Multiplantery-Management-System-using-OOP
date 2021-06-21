#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include"Planets.h"
#include"Cities.h"
#include"Jedi.h"
#include"Sith.h"
#include"Forces.h"
#include"Battles.h"
using namespace std;

void mainmenu();
void PlanetMenu();
void CityMenu();
void JediMenu();
void SithMenu();
void ForcesMenu();
void BattlesMenu();
void AddPlanet();
void AddCity();
void AddJedis();
void AddSiths();
void AddForcess();
void AddBattles();

int main()
{
	char p;
	cout << "***************************************************************" << endl;
	cout << "Welcome to the MultiPlanetary Galactic Empire Management System" << endl;
	cout << endl;
	cout << "              Object Oriented Programming Project              " << endl;
	cout << endl;
	cout << "              Submitted to: 1. Dr Imran Ahmed Siddique         " << endl;
	cout << "                            2. Sir Sikandar Hayat              " << endl;
	cout << endl;
	cout << "              Submitted by: Mubeen Ahmed Jawad                 " << endl;
	cout << "                            01-134182-081                      " << endl;
	cout << "                            BSCS 2-A                           " << endl;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "***************************************************************" << endl;
	cout << "                   Press 'G' to continue                       " << endl;
	cout << "***************************************************************" << endl;
	cin >> p;
	if (p == 'g')
	{
		system("cls");
		mainmenu();
	}

	_getch();
	return 0;
}

void mainmenu()
{
	char c;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout <<"Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Planets                                            " << endl;
	cout << "         2. Cities                                             " << endl;
	cout << "         3. Jedi                                               " << endl;
	cout << "         4. Sith                                               " << endl;
	cout << "         5. Forces                                             " << endl;
	cout << "         6. Battles                                            " << endl;
	cout << "         7. Go Back                                            " << endl;
	cout << endl;
	cout << "***************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
		system("cls");
		PlanetMenu();
		break;
	case '2':
		system("cls");
		CityMenu();
		break;
	case '3':
		system("cls");
		JediMenu();
		break;
	case '4':
		system("cls");
		SithMenu();
		break;
	case '5':
		system("cls");
		ForcesMenu();
		break;
	case '6':
		system("cls");
		BattlesMenu();
		break;
	case '7':
		system("cls");
		main();
		break;
	}

}

void PlanetMenu()
{
	char c;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Planets                               " << endl;
	cout << endl;
	cout << "Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Add Data                                            " << endl;
	cout << "         2. Print Data                                          " << endl;
	cout << "         3. Go Back                                             " << endl;
	cout << endl;
	cout << "****************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
	{
		AddPlanet();
		break;
	}
	case '2':
	{
		Planets obj1;
		obj1.PrintPlanets();
		break;
	}
	case '3':
		system("cls");
		mainmenu();
	}
}

void CityMenu()
{
	char c;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Cities                                " << endl;
	cout << endl;
	cout << "Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Add Data                                            " << endl;
	cout << "         2. Print Data                                          " << endl;
	cout << "         3. Go Back                                             " << endl;
	cout << endl;
	cout << "****************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
		AddCity();
		break;
	case '2':
	{
		Cities obj2;
		obj2.PrintCities();
		break;
	}
	case '3':
		system("cls");
		mainmenu();
		break;
	}
}

void JediMenu()
{
	char c;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Jedi                                  " << endl;
	cout << endl;
	cout << "Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Add Data                                            " << endl;
	cout << "         2. Print Data                                          " << endl;
	cout << "         3. Go Back                                             " << endl;
	cout << endl;
	cout << "****************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
		AddJedis();
		break;
	case '2':
	{
		Jedi obj3;
		obj3.PrintJedis();
		break;
	}
	case '3':
		system("cls");
		mainmenu();
	}
}

void SithMenu()
{
	char c;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Siths                                 " << endl;
	cout << endl;
	cout << "Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Add Data                                            " << endl;
	cout << "         2. Print Data                                          " << endl;
	cout << "         3. Go Back                                             " << endl;
	cout << endl;
	cout << "****************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
		AddSiths();
		break;
	case '2':
	{
		Sith obj4;
		obj4.PrintSiths();
		break;
	}
	case '3':
		system("cls");
		mainmenu();
	}
}

void ForcesMenu()
{
	char c;
	cout << "****************************************************************" << endl;
	cout << endl;
	cout << "                         Forces                                 " << endl;
	cout << endl;
	cout << "Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Add Data                                            " << endl;
	cout << "         2. Print Data                                          " << endl;
	cout << "         3. Go Back                                             " << endl;
	cout << endl;
	cout << "****************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
		AddForcess();
		break;
	case '2':
	{
		Forces obj5;
		obj5.PrintForces();
		break;
	}
	case '3':
		system("cls");
		mainmenu();
	}
}

void BattlesMenu()
{
	char c;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Battles                               " << endl;
	cout << endl;
	cout << "Please Select an Option" << endl;
	cout << endl;
	cout << "         1. Add Data                                            " << endl;
	cout << "         2. Print Data                                          " << endl;
	cout << "         3. Go Back                                             " << endl;
	cout << endl;
	cout << "****************************************************************" << endl;
	cin >> c;
	switch (c)
	{
	case '1':
		AddBattles();
		break;
	case '2':
	{
		Battles obj6;
		obj6.PrintBattles();
		break;
	}
	case '3':
		system("cls");
		mainmenu();
	}
}

void AddPlanet()
{
	char c;
	string Pname, cstatus, ship;
	int Pid, cities, plpopulation;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Planets                               " << endl;
	cout << endl;
	cout << "Please Enter the following:                                    " << endl;
	cout << endl;
	cout << "         Planet ID: "; cin >> Pid;
	cout << endl;
	cout << "         Planet Name: "; cin >> Pname;
	cout << endl;
	cout << "         No of Cities: "; cin >> cities;
	cout << endl;
	cout << "         Planet Population: "; cin >> plpopulation;
	cout << endl;
	cout << "         Planet Status: "; cin >> cstatus;
	cout << endl;
	cout << "         Planet BaseshipName: "; cin >> ship;
	cout << endl;

	ofstream myfile("Planets.txt");
	if (myfile.is_open())
	{
		myfile << "         Planet ID: " << Pid;
		myfile << endl;
		myfile << "         Planet Name: " << Pname;
		myfile << endl;
		myfile << "         No of Cities: " << cities;
		myfile << endl;
		myfile << "         Planet Population: " << plpopulation;
		myfile << endl;
		myfile << "         Planet Status: " << cstatus;
		myfile << endl;
		myfile << "         Planet BaseshipName: " << ship;
		myfile << endl;
		myfile.close();
	}
	else cout << "Unable to open file";
	Planets obj1(Pid, Pname, cities, plpopulation, cstatus, ship);

	cout << endl;
	cout << "Press B to go back to main menu                                 " << endl;
	cout << endl;
	cin >> c;
	switch (c)
	{
	case 'b':
		system("cls");
		mainmenu();
	}
}

void AddCity()
{
	char c;
	string Cname, citystatus;
	int cityid, cpopulation;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Cities                               " << endl;
	cout << endl;
	cout << "Please Enter the following:                                    " << endl;
	cout << endl;
	cout << "         City ID: "; cin >> cityid;
	cout << endl;
	cout << "         City Name: "; cin >> Cname;
	cout << endl;
	cout << "         City Population: "; cin >> cpopulation;
	cout << endl;
	cout << "         City Status: "; cin >> citystatus;
	ofstream myfile("Cities.txt");
	if (myfile.is_open())
	{
		myfile << "         City ID: " << cityid;
		myfile << endl;
		myfile << "         City Name: " << Cname;
		myfile << endl;
		myfile << "         City Population: " << cpopulation;
		myfile << endl;
		myfile << "         City Status: " << citystatus;
		myfile.close();
	}
	else cout << "Unable to open file";

	Cities obj2(cityid, Cname, cpopulation, citystatus);

	cout << endl;
	cout << "Press B to go back to main menu                                 " << endl;
	cout << endl;
	cin >> c;
	switch (c)
	{
	case 'b':
		system("cls");
		mainmenu();
	}
}

void AddJedis()
{
	char c;
	string Jname, jdob, jpower, jcolor;
	int jedid;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Jedis                               " << endl;
	cout << endl;
	cout << "Please Enter the following:                                    " << endl;
	cout << endl;
	cout << "         Jedi ID: "; cin >> jedid;
	cout << endl;
	cout << "         Jedi Name: "; cin >> Jname;
	cout << endl;
	cout << "         Jedi Date of Birth: "; cin >> jdob;
	cout << endl;
	cout << "         Jedi Power: "; cin >> jpower;
	cout << endl;
	cout << "         Jedi Light Saber Color: "; cin >> jcolor;

	ofstream myfile("Jedi.txt");
	if (myfile.is_open())
	{
		myfile << "         Jedi ID: " << jedid;
		myfile << endl;
		myfile << "         Jedi Name: " << Jname;
		myfile << endl;
		myfile << "         Jedi Date of Birth: " << jdob;
		myfile << endl;
		myfile << "         Jedi Power: " << jpower;
		myfile << endl;
		myfile << "         Jedi Light Saber Color: " << jcolor;
		myfile.close();
	}
	else cout << "Unable to open file";
	Jedi obj3(jedid, Jname, jdob, jpower, jcolor);

	cout << endl;
	cout << "Press B to go back to main menu                                 " << endl;
	cout << endl;
	cin >> c;
	switch (c)
	{
	case 'b':
		system("cls");
		mainmenu();
	}
}

void AddSiths()
{
	char c;
	string Sname, Sdob, Spower, Scolor;
	int Sid;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Siths                               " << endl;
	cout << endl;
	cout << "Please Enter the following:                                    " << endl;
	cout << endl;
	cout << "         Sith ID: "; cin >> Sid;
	cout << endl;
	cout << "         Sith Name: "; cin >> Sname;
	cout << endl;
	cout << "         Sith Date of Birth: "; cin >> Sdob;
	cout << endl;
	cout << "         Sith Power: "; cin >> Spower;
	cout << endl;
	cout << "         Sith Light Saber Color: "; cin >> Scolor;

	ofstream myfile("Sith.txt");
	if (myfile.is_open())
	{
		myfile << "         Sith ID: " << Sid;
		myfile << endl;
		myfile << "         Sith Name: " << Sname;
		myfile << endl;
		myfile << "         Sith Date of Birth: " << Sdob;
		myfile << endl;
		myfile << "         Sith Power: " << Spower;
		myfile << endl;
		myfile << "         Sith Light Saber Color: " << Scolor;
		myfile.close();
	}
	else cout << "Unable to open file";
	Sith obj4(Sid, Sname, Sdob, Spower, Scolor);

	cout << endl;
	cout << "Press B to go back to main menu                                 " << endl;
	cout << endl;
	cin >> c;
	switch (c)
	{
	case 'b':
		system("cls");
		mainmenu();
	}
}

void AddForcess()
{
	char c;
	int front, transpo, fplanes, tanks;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Forces                               " << endl;
	cout << endl;
	cout << "Please Enter the following:                                    " << endl;
	cout << endl;
	cout << "         No of FrontLine Soldiers: "; cin >> front;
	cout << endl;
	cout << "         No of Transport Ships: "; cin >> transpo;
	cout << endl;
	cout << "         No of Fighter Planes: "; cin >> fplanes;
	cout << endl;
	cout << "         No of Tanks: "; cin >> tanks;

	ofstream myfile("Forces.txt");
	if (myfile.is_open())
	{
		myfile << "         No of FrontLine Soldiers: " << front;
		myfile << endl;
		myfile << "         No of Transport Ships: " << transpo;
		myfile << endl;
		myfile << "         No of Fighter Planes: " << fplanes;
		myfile << endl;
		myfile << "         No of Tanks: " << tanks;
		myfile.close();
	}
	else cout << "Unable to open file";
	Forces obj5(front, transpo, fplanes, tanks);
	cout << endl;
	cout << endl;
	cout << "Press B to go back to main menu                                 " << endl;
	cout << endl;
	cin >> c;
	switch (c)
	{
	case 'b':
		system("cls");
		mainmenu();
	}
}

void AddBattles()
{
	char c;
	string bname;
	int dmgs, casu;
	cout << "***************************************************************" << endl;
	cout << endl;
	cout << "                         Battles                               " << endl;
	cout << endl;
	cout << "Please Enter the following:                                    " << endl;
	cout << endl;
	cout << "         Battle Name ID: "; cin >> bname;
	cout << endl;
	cout << "         Damages in Dollars: "; cin >> dmgs;
	cout << endl;
	cout << "         No of Casualties: "; cin >> casu;
	cout << endl;
	
	ofstream myfile("Battles.txt");
	if (myfile.is_open())
	{
		myfile << "         Battle Name ID: "; cin >> bname;
		myfile << endl;
		myfile << "         Damages in Dollars: "; cin >> dmgs;
		myfile << endl;
		myfile << "         No of Casualties: "; cin >> casu;
		myfile.close();
	}
	else cout << "Unable to open file";
	Battles obj6(bname, dmgs, casu);

	cout << endl;
	cout << "Press B to go back to main menu                                 " << endl;
	cout << endl;
	cin >> c;
	switch (c)
	{
	case 'b':
		system("cls");
		mainmenu();
		break;
	}
}
