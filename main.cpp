// main.cpp : This file contains the 'main' function. Program execution begins and ends here

#include "roster.h"
#include <iostream>
#include <sstream>

int main() {
    // Displaying course information
    std::cout << "Course Title: Scripting and Programming - Applications" << std::endl;
    std::cout << "Programming Language Used: C++" << std::endl;
    std::cout << "Student ID: 011345179" << std::endl;
    std::cout << "Name: Michael Hickman " << std::endl;

    // Student data
    const std::string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Michael,Hickman,mhic358@wgu.edu,38,35,20,30,SOFTWARE"
    };

    // Creating an instance of Roster
    Roster classRoster;

    // Parsing and adding each student to the roster
    for (int i = 0; i < sizeof(studentData) / sizeof(studentData[0]); i++) {
        std::istringstream ss(studentData[i]);
        std::string token;
        std::string data[9];
        int j = 0;

        while (std::getline(ss, token, ',')) {
            data[j++] = token;
        }

        DegreeProgram degProg = SECURITY; // Default value
        if (data[8] == "NETWORK") degProg = NETWORK;
        else if (data[8] == "SOFTWARE") degProg = SOFTWARE;

        classRoster.add(data[0], data[1], data[2], data[3], std::stoi(data[4]),
            std::stoi(data[5]), std::stoi(data[6]), std::stoi(data[7]), degProg);
    }

    // Printing all students
    classRoster.printAll();

    // Printing invalid emails
    classRoster.printInvalidEmails();

    // Printing average days in course for each student
    for (int i = 0; i <= classRoster.getLastIndex(); i++) {
        classRoster.printAverageDaysInCourse(classRoster.getStudentAt(i)->getStudentID());
    }

    // Printing students in a specific degree program
    classRoster.printByDegreeProgram(SOFTWARE);

    // Removing a student by ID and printing all students again
    classRoster.remove("A3");
    classRoster.printAll();

    // Attempting to remove the same student again to show the error message
    classRoster.remove("A3");

    return 0;
}