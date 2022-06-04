// ClassRosterProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//include "stdafx.h"
#include <iostream>
#include "Degree.h"
#include "roster.h"
#include "student.h"
using namespace std;
int main()
{
   
   string studentData[] =
    {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Guichard,Chery Jr.,gchery5@wgu.edu,32,20,10,15,SOFTWARE"
    };
    cout << "Scripting and Programming: C867" << endl;
    cout << "Program Language: Cpp" << endl;
    cout << "Name: Guichard Chery Jr." << endl;
    cout << "Student ID: 005692143" << endl;
    Roster classRosterProject;
    cout << "Adding data to the list" << endl;
    classRosterProject.addQueue(studentData);
    cout << "Displaying data" << endl;
    classRosterProject.DisplayAll();
    cout << "Removing A2 from the list" << endl;
    classRosterProject.remove("A2");
    cout << "After removing A2" << endl;
    classRosterProject.DisplayAll();
    cout << "Printing Average Days in Course of A3" << endl;
    classRosterProject.printAverageDaysinCourse("A3");
    cout << "Checking for valid emails" << endl;
    classRosterProject.printInvalidEmails();
    cout << "Displaying students of software" << endl;
    classRosterProject.printByDegreeProgram(SOFTWARE);
    cout << "Thank you!" << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
