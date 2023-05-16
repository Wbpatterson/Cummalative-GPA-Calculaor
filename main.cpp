#include <iostream>
#include "GpaCalculator.h"


int main() {
    GpaCalculator tmp{2};
    tmp.addCourse("Math", 85.568);
    tmp.addCourse("English", 76.789);

    tmp.printCourses();

    return 0;
}
