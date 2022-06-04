#pragma once
#include <iostream>
#include <string.h>
#include "student.h"
#include "Degree.h"
using namespace std;

class Roster
{
public:
	Student* stdList[5] = {};

	//some functions
	void add(string StudentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysinCourse1, int DaysinCourse2, int DaysinCourse3, DegreeProgram dp);
	void remove(string StudentID);
	void DisplayAll();
	void printAverageDaysinCourse(string StudentID);
	void printInvalidEmails();
	void addQueue(string sd[]);
	void printByDegreeProgram(DegreeProgram degreeProgram);

	//Destructor
	~Roster();
};

