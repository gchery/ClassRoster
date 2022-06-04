#pragma once
#include "Student.h"
#include <iostream>
using namespace std;

//Constructor
Student::Student(string StudentID, string FirstName, string LastName, string EmailAdress, int Age, int DaysinCourse1, int DaysinCourse2, int DaysinCourse3, DegreeProgram dp)
{
	
	sID = StudentID;
	fName = FirstName;
	lName = LastName;
	emailAddress = EmailAdress;
	iArr[3] = Age;
	iArr[0] = DaysinCourse1;
	iArr[1] = DaysinCourse2;
	iArr[2] = DaysinCourse3;
	degreeprogram = dp;
	cout << "Student , " << fName << " " << lName << " added to the list." << endl;
}
string Student::GetstudentID() {
	return sID;
};
string Student::GetfirstName() {
	return fName;
}
string  Student::GetlastName() {
	return lName;
}
string  Student::GetemailAddress() {
	return emailAddress;
}
int  Student::Getage() {
	return iArr[3];
}
int* Student::GetcompletionDays() {
	return iArr;
}
DegreeProgram  Student::GetdegreeProgram() {
	return degreeprogram;
}

void  Student::SetstudentID(string StudentID) {
	sID = StudentID;
}
void  Student::SetfirstName(string FirstName) {
	fName = FirstName;
}
void  Student::SetlastName(string LastName) {
	lName = LastName;
}
void  Student::SetemailAddress(string emailAddress) {
	emailAddress = emailAddress;
}
void  Student::Setage(int Age) {
	iArr[3] = Age;
}

void Student::print() {
	cout<< sID << "\t";
	cout << "First Name : " << fName << "\t";
	cout << "Last Name: " << lName << "\t";
	cout << "Age: " << iArr[3] << "\t";
	cout << "DaysinCourse: {" << iArr[0] << ", " << iArr[1] << ", " << iArr[2] << "}\t";

	string caseresult;
	int enumv;
	enumv = degreeprogram;
	if (enumv == SECURITY) {
		caseresult = "SECURITY";
	}
	else {
		if (enumv == NETWORK) {
			caseresult = "NETWORK";
		}
		else {
			caseresult = "SOFTWARE";
		}
	}
	cout << "Degree Program: " << caseresult << endl;
}

void Student::SetcompletionDays(int dc1, int dc2, int dc3) {
	iArr[0] = dc1;
	iArr[1] = dc2;
	iArr[2] = dc3;
}

Student::~Student() {
	cout << "Student destructor call" << endl;
}
