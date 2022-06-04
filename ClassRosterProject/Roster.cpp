#pragma once
#include "Roster.h"
#include<iostream>
#include <string>
using namespace std;


//simple add function to add student to the list
void Roster::add(string StudentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysinCourse1, int DaysinCourse2, int DaysinCourse3, DegreeProgram dp)
{
	int iterator = 0;
	while (iterator < 5) {
		if (stdList[iterator] == 0) {
			stdList[iterator] = new Student(StudentID, FirstName, LastName, EmailAddress,Age, DaysinCourse1,DaysinCourse2,DaysinCourse3,dp);
			cout << stdList[iterator]->GetstudentID() << " added to the student list." << endl;
			break;
		}
		iterator += 1;
	}
}

void Roster::remove(string StudentID) {
	int i = 0;
	for (i = 0;i < 4;i++) {
		if (stdList[i]->GetstudentID() == StudentID) {
			cout << stdList[i]->GetstudentID() << " removed from the list" << endl;
			for (int j = i;j < 4;j++) {
				if(j != 4) {
					stdList[j] = stdList[j + 1];
				}
				else
				 {
					stdList[4] = nullptr;
				}
			}
			return;
		}
	}
	cout << "Sorry, but the student id " << StudentID << " cannot found" << endl;
}

void Roster::printAverageDaysinCourse(string StudentID) {
	for (int i = 0;i < 4;i++) {
		if (stdList[i]->GetstudentID() == StudentID) {
			cout << "Average Days in Course: " << (stdList[i]->GetcompletionDays()[0] + stdList[i]->GetcompletionDays()[1] + stdList[i]->GetcompletionDays()[2]) / 3.0 << endl;
			return;
		}
	}
}

void Roster::DisplayAll() {
	for (int i = 0;i < 5;i++) {
		if (i == 0) {
			stdList[i]->print();
		}
		else {
			if (stdList[i]->GetstudentID() != stdList[i - 1]->GetstudentID()) {
				stdList[i]->print();
			}
		}
	}
}

void Roster::printInvalidEmails() {
	bool allvalidcheck = 1;
	for (int i = 0;i < 4;i++) {
		string email = stdList[i]->GetemailAddress();
		bool a = (email.find('@') != string::npos);
		bool b = (email.find('.') != string::npos);
		bool c = (email.find(' ') != string::npos);

		if (a == 0 || b == 0 || c == 1) {
			allvalidcheck = 0;
			cout << email << endl;
		}
	}
	if (allvalidcheck == 1) {
		cout << "All emails are valid and passing the criteria" << endl;
	}
}

void Roster::printByDegreeProgram(DegreeProgram dp) {
	for (int i = 0;i < 4;i++) {
		if (stdList[i]->GetdegreeProgram() == dp) {
			stdList[i]->print();
		}
	}
}

void Roster::addQueue(string sd[]) {
	
	for (int i = 0;i < 5;i++) {
		int index = i;
		
		//here to parse the comma seperated strings
		int a = sd[index].find(",");
		int b = sd[index].find(",", a + 1);
		int c = sd[index].find(",", b + 1);
		int d = sd[index].find(",", c + 1);
		int e = sd[index].find(",", d + 1);
		int f = sd[index].find(",", e + 1);
		int g = sd[index].find(",", f + 1);
		int h = sd[index].find(",", g + 1);
		int k = sd[index].find(",", h + 1);
		
		//input data to relevant vars
		string id = sd[index].substr(0, a);
		string fn = sd[index].substr(a + 1, b - a - 1);
		string ln = sd[index].substr(b + 1, c - b - 1);
		string em = sd[index].substr(c + 1, d - c - 1);
		int age = stoi(sd[index].substr(d + 1, e - d - 1));
		int cc1 = stoi(sd[index].substr(e + 1, f - e - 1));
		int cc2 = stoi(sd[index].substr(f + 1, g - f - 1));
		int cc3 = stoi(sd[index].substr(g + 1, h - g - 1));
		string pg = sd[index].substr(h + 1, k - h - 1);
		DegreeProgram dp;
		if (pg == "SECURITY") {
			dp = SECURITY;
		}
		else {
			if (pg == "NETWORK") {
				dp = NETWORK;
			}
			else {
				if (pg == "SOFTWARE") {
					dp = SOFTWARE;
				}
			}
		}
		
		for (int i = 0;i < 5;i++) {
			if (stdList[i] == 0) {
				stdList[i] = new Student(id, fn, ln, em, age, cc1, cc2, cc3, dp);
				cout << stdList[i]->GetstudentID() << " added to the list." << endl;
				break;
			}
		}
		}
		
		
	
}

Roster::~Roster() {
	
	int iterator = 0;
	while (iterator < 5) {
		stdList[iterator]->~Student();
		iterator += 1;
	}
	cout << "Roster destructor called along with student." << endl;
}
