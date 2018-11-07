#include "stdafx.h"
#pragma once
#include <iostream>
using namespace std;

#ifndef _People
#define _People

class People
{
protected:	
	char *Name = new char[100];
	struct Birthday
	{
		unsigned int date;
		unsigned int month;
		unsigned int year;
	};
	Birthday datebirth;
	int Id_Code;

public:
	People();
	//People(char*, int, int, int, int);
	
	static int countPeople;
	
	static int sumPeople() {
		return countPeople;
	}
	
	virtual void PrintInfo();
	
	void setName(char *name);
	void setDate(int date);
	void setMonth(int month);
	void setYear(int year);
	void setId_Code(int id);

	char *getName(); //{return Name;}
	int getDate();
	int getMonth();
	int getYear();	
	int getId_Code();

	//copyconstructor
	People(People &copyPeople);

	~People();	

};

#endif // !_People
