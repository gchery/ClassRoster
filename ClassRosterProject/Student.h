#pragma once
#include <iostream>
#include "Degree.h";

using namespace std;

class Student
{
private:
	string sID;
	string fName;
	string lName;
	string emailAddress;
	DegreeProgram degreeprogram;
	int iArr[4];

public:
	Student(string StudentID, string FirstName, string LastName, string EmailAdress, int Age, int DaysinCourse1, int DaysinCourse2, int DaysinCourse3, DegreeProgram dp);


		//Getter functions for all variables
	string GetstudentID();
	string GetfirstName();
	string GetlastName();
	string GetemailAddress();
	int Getage();
	int* GetcompletionDays();
	DegreeProgram GetdegreeProgram();

	//all the setter functions to set the values
	void SetstudentID(string StudentID);
	void SetfirstName(string FirstName);
	void SetlastName(string LastName);
	void SetemailAddress(string emailAddress);
	void Setage(int Age);
	void SetcompletionDays(int DaysinCourse1, int DaysinCourse2, int DaysinCourse3);
	void print();

	//Destructor
	~Student();

};

