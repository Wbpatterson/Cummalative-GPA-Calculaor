//
// Created by BJ on 5/16/2023.
//

#include "Course.h"


Course::Course(): courseName("unknown"), grade(0.0), letterGrade("unknown"), points(0.0) {}

Course::Course(string &name, float &score) {
    courseName = name;
    grade = score;
    calculateLetterGrade();
}

string Course::getCourseName() { return courseName; }

string Course::getLetterGrade() { return letterGrade; }

float Course::getGrade() const { return grade; }

float Course::getPoints() const { return points;}

void Course::setCourseName(string &name) { courseName = name; }

void Course::setGrade(float score) { grade = score; }

void Course::calculateLetterGrade() {

    if(grade >= 97) letterGrade = "A+", points = 4.0;

    else if(grade >= 93) letterGrade = "A", points = 4.0;

    else if(grade >= 90) letterGrade = "A-", points = 3.7;

    else if(grade >= 87) letterGrade = "B+", points = 3.3;

    else if(grade >= 83) letterGrade = "B", points = 3.0;

    else if(grade >= 80) letterGrade = "B-", points = 2.7;

    else if(grade >= 77) letterGrade = "C+", points = 2.3;

    else if(grade >= 73) letterGrade = "C", points = 2.0;

    else if(grade >= 70) letterGrade = "C+", points = 1.7;

    else if(grade >= 67) letterGrade = "C+", points = 1.3;

    else if(grade >= 65) letterGrade = "C+", points = 1.0;

    else if(grade < 65) letterGrade = "F", points = 0.5;
}



