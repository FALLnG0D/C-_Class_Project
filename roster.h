// roster.h
#pragma once
#include "student.h"

class Roster {
public:
	// Constructor and Destructor
	Roster();
	~Roster();
	// Fuctions to maniputate roster
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress,
		int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,  DegreeProgram degreeProgram); int getLastIndex() const;
	void remove(std::string studentID);
	void printAll() const;
	void printAverageDaysInCourse(std::string studentID) const;
	void printInvalidEmails() const;
	void printByDegreeProgram(DegreeProgram degreeProgram)  const;
	Student*getStudentAt(int index) const {
		if (index >= 0 && index <= lastIndex) {
			return classRosterArray[index];
		}
		else {
			return nullptr; // Handle out-of-bounds index
		}
	}
private:
	//Array of pointers to hold student data
	Student* classRosterArray[5];// to keep track of the last index in the array
	int lastIndex;
	
};