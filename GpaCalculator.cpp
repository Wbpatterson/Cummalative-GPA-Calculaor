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

float GpaCalculator::getGPA() const { return gpa; }

void GpaCalculator::deleteCourse(const string& selection) {

    for(auto i = courses.begin(); i < courses.end(); i++){
       if(i->getCourseName() == selection)
           courses.erase(i);
    }
}

void GpaCalculator::printCourses(){

    for(auto& course: courses){
        std::cout << course.getCourseName() << " - ";
        std::cout << std::setprecision(4) << course.getGrade() << ", ";
        std::cout << course.getLetterGrade() << "\n";
    }

    std::cout << std::endl;
}

void GpaCalculator::calculateGPA() {

    float sum = 0;
    for(auto i = courses.begin(); i < courses.end(); i++){
        sum += i->getPoints();
    }

    gpa = sum / static_cast<float>(courses.size());

}
