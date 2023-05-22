#include <iostream>
#include "GpaCalculator.h"

int main() {

    int option;

    std::cout << "Enter the total amount of courses: ";
    std::cin >> option;
    std::cin.ignore();

    GpaCalculator tmp{option};

    for(int i = 0; i < option; i++){
        string courseName;
        float grade;

        std::cout << "Enter Course Name: ";
        std::getline(std::cin, courseName);

        std::cout << "Enter Course Grade: ";
        std::cin >> grade;

        std::cin.ignore();

        tmp.addCourse(courseName, grade);
    }

    tmp.printCourses();
    tmp.calculateGPA();
    std::cout << "Cumulative Semester GPA: " << std::setprecision(3) << tmp.getGPA();

    return 0;
}
