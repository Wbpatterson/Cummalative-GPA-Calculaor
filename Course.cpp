//
// Created by BJ on 5/16/2023.
//

#include "Course.h"

#include <utility>

Course::Course(): grade(0) {}

Course::Course(string &name, float &score): courseName(name), grade(score) {}

string Course::getCourseName() { return courseName; }

float Course::getGrade() { return grade; }

void Course::setCourseName(string name) { courseName = name; }

void Course::setGrade(float score) { grade = score; }



