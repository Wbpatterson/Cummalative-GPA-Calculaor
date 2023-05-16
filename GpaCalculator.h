//
// Created by BJ on 5/16/2023.
//

#ifndef UNTITLED1_GPACALCULATOR_H
#define UNTITLED1_GPACALCULATOR_H
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "Course.h"

class GpaCalculator {
public:
    GpaCalculator();
    GpaCalculator(int);
    void addCourse(string, float);
    void deleteCourse();
    void printCourses();

private:
    float gpa;
    int courseCount;
    std::vector<Course> courses;

};


#endif //UNTITLED1_GPACALCULATOR_H
