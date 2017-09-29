/*
	Badajoz, Severiano
	Vu, Alexis

	CS A150
	September 29,2017

	Project 1(Part A)
*/

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Course
{
public:

	// default constructor
	Course();

	// setCourseInfo
	void setCourseInfo(const string& name, const string& number, const char grade, const int credits);

	// printCourseInfo
	void printCourseInfo(const bool printable) const;

	// getCourseCredits
	int getCourseCredits() const;

	// getCourseNumber
	string getCourseNumber() const;

	// getCourseName
	string getCourseName() const;

	// getCourseGrade
	char getCourseGrade() const;

	// destructor
	~Course();

private:
    string courseName; 	
    string courseNo; 	
    char courseGrade;	
    int courseCredits;	
};

#endif
