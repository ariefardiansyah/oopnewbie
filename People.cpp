#include "stdafx.h"
#include "People.h"

int People::countPeople = 0;

People::People()
{
	this->countPeople++;
}

void People::PrintInfo()
{
	cout << "Name : " << this->getName() << endl;
	cout << "Birthday : " << this->getDate() <<" "<< this->getMonth() <<" "<< this->getYear() << endl;
	cout << "ID Code : " << this->getId_Code() << endl;
}

char* People::getName()
{
	return this->Name;
}

int People::getDate()
{
	return this->datebirth.date;
}

int People::getMonth()
{
	return this->datebirth.month;
}

int People::getYear()
{
	return this->datebirth.year;
}

int People::getId_Code() 
{
	return this->Id_Code;
}

void People::setName(char *Name)
{
	this->Name = Name;
}

void People::setDate(int date)
{
	this->datebirth.date = date;
}

void People::setMonth(int month)
{
	this->datebirth.month = month;
}

void People::setYear(int year)
{
	this->datebirth.year = year;
}

void People::setId_Code(int id)
{
	this->Id_Code = id;
}

//copy constructor
People::People(People &copyPeople)
{
	Name = copyPeople.getName();
	datebirth.date = copyPeople.getDate();
	datebirth.month = copyPeople.getMonth();
	datebirth.year = copyPeople.getYear();
	Id_Code = copyPeople.getId_Code();
}

People::~People() {
	delete[] Name;
	//cout << "Destroy People..";
}
