//
// Created by BJ on 5/16/2023.
//


#ifndef UNTITLED1_COURSE_H
#define UNTITLED1_COURSE_H

#include <string>
using std::string;

class Course {
public:
    Course();
    Course(string&, float&);
    string getCourseName();
    float getGrade();
    void setCourseName(string);
    void setGrade(float);

private:
    string courseName;
    float grade;
};


#endif //UNTITLED1_COURSE_H
