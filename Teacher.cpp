#include "stdafx.h"
#include "Teacher.h"

int Teacher::countTeacher = 0;
int Teacher::idteacher = 200;

Teacher::Teacher()
{
	this->countTeacher++;
}

void Teacher::PrintInfo()
{
	Staff::PrintInfo();
	cout << "Class : " << this->getClass() << endl;
	cout << "Subject : " << this->getSubject1() << endl;
	cout << "Second Subject : " << this->getSubject2() << endl;
}

int Teacher::getClass()
{
	return this->Class;
}

char* Teacher::getSubject1()
{
	if (this->subject1 == MATHS) {
		return "MATHS";
	}
	else if (this->subject1 == PHYS) {
		return "PHYS";
	}
	else if (this->subject1 == ENGLISH) {
		return "ENGLISH";
	}
}

char* Teacher::getSubject2()
{
	if (this->subject2 == MATHS) {
		return "MATHS";
	}
	else if (this->subject2 == PHYS) {
		return "PHYS";
	}
	else if (this->subject2 == ENGLISH) {
		return "ENGLISH";
	}
}

void Teacher::setClass(int Class)
{
	this->Class = Class;
}

void Teacher::setSubject1(int s1)
{
	switch (s1)
	{
	case 0:
		this->subject1 = MATHS;
		break;
	case 1:
		this->subject1 = PHYS;
		break;
	case 2:
		this->subject1 = ENGLISH;
		break;
	}
}

void Teacher::setSubject2(int s2)
{
	switch (s2)
	{
	case 0:
		this->subject2 = MATHS;
		break;
	case 1:
		this->subject2 = PHYS;
		break;
	case 2:
		this->subject2 = ENGLISH;
		break;
	}
}

void Teacher::setIDTeacher()
{
	this->idteacher++;
	People::setId_Code(this->idteacher);
}

Teacher::Teacher(Teacher &copyTeacher) : Staff(copyTeacher)
{
	Class = copyTeacher.getClass();
	subject1 = copyTeacher.subject1;
	subject2 = copyTeacher.subject2;
}
