//student.h
#pragma once
#include"degree.h"
#include<string>

class Student {
public:
	//Constuctors
	Student();
	Student(std::string studentID,
		std::string firstName, std::string lastName,
		std::string emailAddress, int age, int
		daysToComplete[], DegreeProgram
		degreeProgram);

	//Accessors(getters)
	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmailAddress() const;
	int getAge() const;
	const int* getDaysToComplete() const;
	DegreeProgram getDegreeProgram()
		const;

	//Mutators (setters)
	void setStudentID(std::string studentID);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmailAddress(std::string emailAddress);
	void setAge(int age);
	void setDaysToComplete(int daysToComplete[]);
	void setDegreeProgram(DegreeProgram degreeProgram);  


	void print() const;

private:
	// Member variables
	std:: string studentID;
	std:: string firstName;
	std:: string lastName;
	std:: string emailAddress;
	int age;
	int daysToComplete[3];
	DegreeProgram degreeProgram;
};