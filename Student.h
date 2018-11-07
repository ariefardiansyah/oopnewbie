#include "stdafx.h"
#include "People.h"
#include <iostream>
using namespace std;

#ifndef _Student
#define _Student

class Student : public People
{
private:
	int Grade;
	int NumberProject;
	float *Score_oep = new float[10];
	float avScore(float* arr);

public:
	
	Student();
	static int countStudent;
	static int idstudent;

	static int sumStudent() {
		return countStudent;
	}
			
	void PrintInfo();
	
	void setGrade(int grade);
	void setNumberProject(int number);
	void setScore(int, float);
	//void calcAVG(float);
	void setIDStudent();

	float getAVGScore();
	int getGrade();
	int getNumberProject();
	float getScore();

	Student(Student &copyStudent);

	~Student();
};

#endif // !_Student
