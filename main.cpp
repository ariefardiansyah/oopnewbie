MAIN

// Q9.1_Arief.Ardiansyah.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "People.h"
#include "Staff.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
#include <list>

#define max 2

using namespace std;

list<People*> Node;
list<People*> copyList;
list<People*>::iterator itr;

int dateb, monthb, yearb, idcode;
int deptid, datejd, monthjd, yearjd, level;
int grade, nop;
float score;
int Class, s1, s2;

void addPeople(People *People1) {
	//People *People1 = new People();
	char* name = new char[100];
	cout << "Name : ";
	cin >> name;
	People1->setName(name);
	cout << "Date Birthday : ";
	cin >> dateb;
	People1->setDate(dateb);
	cout << "Month Birthday : ";
	cin >> monthb;
	People1->setMonth(monthb);
	cout << "Year Birthday : ";
	cin >> yearb;
	People1->setYear(yearb);
	//cout << "ID Code : ";
	//cin >> idcode;
	//People1->setId_Code(idcode);
}

void addElement()
{
	int choose;
	cout << "choose 1. Staff  2. Teacher  3. Student ?";
	cin >> choose;
	
	if (choose == 1)
	{		
		People *Staff1 = new Staff();
		addPeople(Staff1);
		
		cout << "Department ID : ";
		cin >> deptid;
		dynamic_cast<Staff*>(Staff1)->setDeptid(deptid);
		//Staff1->setDeptid(deptid);
		cout << "Joined Date : ";
		cin >> datejd;
		dynamic_cast<Staff*>(Staff1)->setDateJoinD(datejd);
		//Staff1->setDateJoinD(datejd);
		cout << "Joined Month : ";
		cin >> monthjd;
		dynamic_cast<Staff*>(Staff1)->setDateJoinM(monthjd);
		//Staff1->setDateJoinM(monthjd);
		cout << "Joined Year : ";
		cin >> yearjd;
		dynamic_cast<Staff*>(Staff1)->setDateJoinY(yearjd);
		//Staff1->setDateJoinY(yearjd);
		cout << "Level : ";
		cin >> level;
		dynamic_cast<Staff*>(Staff1)->setLevel(level);
		//Staff1->setLevel(level);
		dynamic_cast<Staff*>(Staff1)->setIDStaff();
		//Staff1->PrintInfo();
		Node.push_back(Staff1);
		cout << endl;
	}
	else if (choose == 2)
	{		
		Staff *Teacher1 = new Teacher();
		addPeople(Teacher1);

		cout << "Department ID : ";
		cin >> deptid;		
		Teacher1->setDeptid(deptid);
		cout << "Joined Date : ";
		cin >> datejd;		
		Teacher1->setDateJoinD(datejd);
		cout << "Joined Month : ";
		cin >> monthjd;		
		Teacher1->setDateJoinM(monthjd);
		cout << "Joined Year : ";
		cin >> yearjd;
		Teacher1->setDateJoinY(yearjd);
		cout << "Level : ";
		cin >> level;		
		Teacher1->setLevel(level);
		cout << "Class : ";
		cin >> Class;
		dynamic_cast<Teacher*>(Teacher1)->setClass(Class);		
		cout << "Subject (0.MATHS 1.PHYS 2.ENGLISH) : ";
		cin >> s1;
		dynamic_cast<Teacher*>(Teacher1)->setSubject1(s1);
		cout << "Second Subject (0.MATHS 1.PHYS 2.ENGLISH) : ";
		cin >> s2;
		dynamic_cast<Teacher*>(Teacher1)->setSubject2(s2);
		dynamic_cast<Teacher*>(Teacher1)->setIDTeacher();
		//Teacher1->PrintInfo();
		Node.push_back(Teacher1);
		cout << endl;
	}
	else if (choose == 3)
	{
		People *Student1 = new Student();
		addPeople(Student1);

		cout << "Grade : ";
		cin >> grade;
		dynamic_cast<Student*>(Student1)->setGrade(grade);
		//Student1->setGrade(grade);
		cout << "Number of Project : ";
		cin >> nop;
		dynamic_cast<Student*>(Student1)->setNumberProject(nop);
		//Student1->setNumberProject(nop);
		for (int i=0; i < dynamic_cast<Student*>(Student1)->getNumberProject(); i++)
		{
			cout << "Score of project-" << i+1 << " : ";
			cin >> score;
			dynamic_cast<Student*>(Student1)->setScore(i, score);
		}
		dynamic_cast<Student*>(Student1)->setIDStudent();
		//Student1->PrintInfo();
		Node.push_back(Student1);
		cout << endl;
	}	
}

void CloneNewList()
{
	for (itr = Node.begin(); itr != Node.end(); itr++)
	{
		if (dynamic_cast<Student*>(*itr) != NULL)
		{
			People *copyStudent = new Student(*(dynamic_cast<Student*>(*itr)));
			copyList.push_back(copyStudent);
		}
		else if (dynamic_cast<Teacher*>(*itr) != NULL)
		{
			People *copyTeacher = new Teacher(*(dynamic_cast<Teacher*>(*itr)));
			copyList.push_back(copyTeacher);
		}
		else if (dynamic_cast<Staff*>(*itr) != NULL)
		{
			People *copyStaff = new Staff(*(dynamic_cast<Staff*>(*itr)));
			copyList.push_back(copyStaff);
		} 
	}
	cout << endl << "Clone List Finish..." << endl;
	cout << "This is Clone List : " << endl;

	for (itr = copyList.begin(); itr != copyList.end(); itr++)
	{
		(*itr)->PrintInfo();
		cout << endl;
	}
}

int main()
{	
	
	for (int i = 0; i < max; i++)
	{
		addElement();
	}
	/*
	//print all No sort
	for (itr = Node.begin(); itr != Node.end(); itr++)
	{
		(*itr)->PrintInfo();
		cout << endl;
	}
	/*
	/*
	//print list group
	for (itr = Node.begin(); itr != Node.end(); itr++)
	{
		if (dynamic_cast<Staff*>(*itr)->getId_Code() > 100 && dynamic_cast<Staff*>(*itr)->getId_Code() < 200)
		{
			(*itr)->PrintInfo();
		}
	}
	for (itr = Node.begin(); itr != Node.end(); itr++)
	{
		if (dynamic_cast<Teacher*>(*itr)->getId_Code() > 200 && dynamic_cast<Teacher*>(*itr)->getId_Code() < 300)
		{
			(*itr)->PrintInfo();
		}
	}
	for (itr = Node.begin(); itr != Node.end(); itr++)
	{
		if (dynamic_cast<Student*>(*itr)->getId_Code() > 300 && dynamic_cast<Student*>(*itr)->getId_Code() < 400)
		{
			(*itr)->PrintInfo();
		}
	}
	*/
	
	cout << "student had average > 5 : " << endl;
	for (itr = Node.begin(); itr != Node.end(); itr++)
	{
		if (dynamic_cast<Student*>(*itr) != NULL)
		{
			if (dynamic_cast<Student*>(*itr)->getAVGScore() > 5)
			{
				(*itr)->PrintInfo();
			}
		}		
	}
	
	cout << endl << "number of ... " << endl;
	cout << "Number of People : " << People::sumPeople() << endl;
	cout << "Number of Staff : " << Staff::sumStaff() << endl;
	cout << "Number of Teachers : " << Teacher::sumTeacher() << endl;
	cout << "Number of Students : " << Student::sumStudent() << endl;
	cout << endl;
	
	CloneNewList();

	system("pause");
}
