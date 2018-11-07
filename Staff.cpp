#include "stdafx.h"
#include "Staff.h"

int Staff::countStaff = 0;
int Staff::idstaff = 100;
Staff::Staff()
{
	this->countStaff++;
}

void Staff::PrintInfo()
{
	//this->Name, this->datebirth.date, this->datebirth.month, this->datebirth.year, this->Id_Code
	People::PrintInfo();
	cout << "Dept ID : " << this->getDeptid() << endl;
	cout << "Joined Date : " << this->getDateJoinD() << " " << this->getDateJoinM() << " " << this->getDateJoinY() << endl;
	cout << "Level : " << this->getLevel() << endl;
}

int Staff::getDeptid()
{
	return this->Dept_id;
}
int Staff::getDateJoinD() 
{
	return this->DateJoin.date;
}
int Staff::getDateJoinM() 
{
	return this->DateJoin.month;
}
int Staff::getDateJoinY() 
{
	return this->DateJoin.year;
}
int Staff::getLevel()
{
	return this->Level;
}

void Staff::setDeptid(int Dept_id)
{
	this->Dept_id = Dept_id;
}

void Staff::setDateJoinD(int djdate)
{
	this->DateJoin.date = djdate;
}

void Staff::setDateJoinM(int djmonth)
{
	this->DateJoin.month = djmonth;
}

void Staff::setDateJoinY(int djyear)
{
	this->DateJoin.year = djyear;
}

void Staff::setLevel(int level)
{
	this->Level = level;
}

void Staff::setIDStaff()
{
	this->idstaff++;
	People::setId_Code(this->idstaff);
}

Staff::Staff(Staff &copyStaff) : People(copyStaff)
{
	Dept_id = copyStaff.getDeptid();
	DateJoin.date = copyStaff.getDateJoinD();
	DateJoin.month = copyStaff.getDateJoinM();
	DateJoin.year = copyStaff.getDateJoinY();
	Level = copyStaff.getLevel();
}

Staff::~Staff() {
	//cout << "Destroy Staff.." << endl;
}
