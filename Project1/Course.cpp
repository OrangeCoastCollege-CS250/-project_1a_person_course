/*
Badajoz, Severiano
Vu, Alexis

CS A150
September 29,2017

Project 1(Part A)
*/

#include "Course.h"

// default constructor
Course::Course() {
	courseCredits = 0;
	courseGrade = '*';
}

// setCourseInfo
void Course::setCourseInfo(const string& name, const string& number, const char grade, const int credits) {
	courseName = name;
	courseNo = number;
	courseGrade = grade;
	courseCredits = credits;
}

// printCourseInfo
void Course::printCourseInfo(const bool printable) const {
	cout << setw(15);
	cout << courseNo << courseName << courseCredits << courseGrade << endl;
}

/// getCourseCredits
int Course::getCourseCredits() const {
	return courseCredits;
}

// getCourseNumber
string Course::getCourseNumber() const {
	return courseNo;
}

// getCourseName
string Course::getCourseName() const {
	return courseName;
}

// getCourseGrade
char Course::getCourseGrade() const {
	return courseGrade;
}


// destructor
Course::~Course() {}
