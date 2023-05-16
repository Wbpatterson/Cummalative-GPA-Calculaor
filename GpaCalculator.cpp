//
// Created by BJ on 5/16/2023.
//

#include "GpaCalculator.h"

GpaCalculator::GpaCalculator(): gpa(0), courseCount(0) {}

GpaCalculator::GpaCalculator(int totalCourses): gpa(0), courseCount(totalCourses) {}

void GpaCalculator::addCourse(string courseName, float score) {
    courses.emplace_back(courseName, score);
    courseCount++;
}

void GpaCalculator::printCourses(){

    for(auto& x: courses){
        std::cout << x.getCourseName() << " - ";
        std::cout << std::setprecision(4) << x.getGrade() << "\n";
    }

    std::cout << std::endl;
}
