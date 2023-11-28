// student.cpp
#include "student.h"
#include <iostream>

Student::Student()
{
}

// Constructor with all parameters
Student::Student(std::string studentID, std::string firstName, std::string lastName, 
                 std::string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
    this->degreeProgram = degreeProgram;
}

// Accessors (getters)
std::string Student::getStudentID() const { return this->studentID; }
std::string Student::getFirstName() const { return this->firstName; }
std::string Student::getLastName() const { return this->lastName; }
std::string Student::getEmailAddress() const { return this->emailAddress; }
int Student::getAge() const { return this->age; }
const int* Student::getDaysToComplete() const { return this->daysToComplete; }
DegreeProgram Student::getDegreeProgram() const { return this->degreeProgram; }

// Mutators (setters)
void Student::setStudentID(std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
void Student::setLastName(std::string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(std::string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysToComplete(int daysToComplete[]) {
    for (int i = 0; i < 3; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

// Print student info
void Student::print() const {
    std::cout << "Student ID: " << this->studentID << "\t";
    std::cout << "First Name: " << this->firstName << "\t";
    std::cout << "Last Name: " << this->lastName << "\t";
    std::cout << "Email Address: " << this->emailAddress << "\t";
    std::cout << "Age: " << this->age << "\t";
    std::cout << "Days in Course: {" << this->daysToComplete[0] << ", " << this->daysToComplete[1] << ", " << this->daysToComplete[2] << "}\t";
    std::string degreeProgramString = (this->degreeProgram == SECURITY) ? "SECURITY" : (this->degreeProgram == NETWORK) ? "NETWORK" : "SOFTWARE";
    std::cout << "Degree Program: " << degreeProgramString << std::endl;
}