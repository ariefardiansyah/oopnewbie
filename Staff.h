#include "stdafx.h"
#include "People.h"
#pragma once
using namespace std;

#ifndef _Staff
#define _Staff

class Staff : public People
{
protected:
	int Dept_id;
	struct Joined_date
	{
		unsigned int date;
		unsigned int month;
		unsigned int year;
	};
	Joined_date DateJoin;
	int Level;

public:	
	Staff();
	//Staff(char *Name, int date, int month, int year, int id, int id_dept, int djdate, int djmonth, int djyear, int level);
	
	static int countStaff;
	static int idstaff;

	static int sumStaff() {
		return countStaff;
	}

	virtual void PrintInfo();

	void setDeptid(int Dept_id);
	void setDateJoinD(int djdate);
	void setDateJoinM(int djmonth);
	void setDateJoinY(int djyear);
	void setLevel(int level);
	void setIDStaff();

	int getDeptid();
	int getDateJoinD();
	int getDateJoinM();
	int getDateJoinY();
	int getLevel();

	Staff(Staff &copyStaff);

	~Staff();
};

#endif // !_Staff
