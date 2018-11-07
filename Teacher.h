#include "stdafx.h"
#include "Staff.h"
#include <iostream>
using namespace std;

#ifndef _Teacher
#define _Teacher

class Teacher : public Staff
{
private:
	int Class;
	enum Subject
	{
		MATHS, PHYS, ENGLISH
	};
	Subject subject1;
	Subject subject2;

public:
	Teacher();
	static int countTeacher;
	static int idteacher;
	
	static int sumTeacher() {
		return countTeacher;
	}

	void PrintInfo();
	
	void setClass(int Class);
	void setSubject1(int s1);
	void setSubject2(int s2);
	void setIDTeacher();

	int getClass();
	char* getSubject1();
	char* getSubject2();

	Teacher(Teacher &copyTeacher);

};



#endif // !_Teacher
