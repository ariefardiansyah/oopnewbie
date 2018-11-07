#include "stdafx.h"
#include "Student.h"


int Student::countStudent = 0;
int Student::idstudent = 300;

Student::Student() 
{
	this->countStudent++;
}

void Student::PrintInfo()
{
	People::PrintInfo();
	cout << "Grade : " << this->getGrade() << endl;
	cout << "Number of Project : " << this->getNumberProject() << endl;
	cout << "average score : " << this->avScore(this->Score_oep) << endl;
		
}

int Student::getGrade()
{
	return this->Grade;
}
int Student::getNumberProject()
{
	return this->NumberProject;
}
/*
float *Student::getScore()
{
	for (int i = 0; i < this->getNumberProject(); i++)
	{
		cout << "Score project -"<<i+1 <<" : "<<return this->Score_oep[i] << endl;
	}
	//return this->Score_oep[];
}
*/

float Student::getAVGScore()
{
	return this->avScore(Score_oep);
}

void Student::setGrade(int grade)
{
	this->Grade = grade;
}
void Student::setNumberProject(int number)
{
	this->NumberProject = number;
}
void Student::setScore(int i, float score)
{
	this->Score_oep[i] = score;
}


float Student::avScore(float* score)
{
	float sum = 0;
	for (int i = 0; i < this->getNumberProject(); i++)
	{
		sum = sum + this->Score_oep[i];
	}
	float avg;
	avg = sum / this->getNumberProject();

	return avg;
}

void Student::setIDStudent()
{
	this->idstudent++;
	People::setId_Code(this->idstudent);
}

Student::Student(Student &copyStudent) : People(copyStudent)
{
	Grade = copyStudent.getGrade();
	NumberProject = copyStudent.getNumberProject();
	for (int i = 0; i < this->getNumberProject(); i++)
	{
		Score_oep[i] = copyStudent.Score_oep[i];
	}
}

Student::~Student() {	
	cout << "Destroy Student..." << endl;
}
