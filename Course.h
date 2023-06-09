//
// Created by BJ on 5/16/2023.
//


#ifndef UNTITLED1_COURSE_H
#define UNTITLED1_COURSE_H

#include <string>
using std::string;


// need to specify credit hours and apply to gpa
class Course {
public:
    Course();
    Course(string&, float&);
    string getCourseName();
    string getLetterGrade();
    float getGrade() const;
    float getPoints() const;
    void setCourseName(string&);
    void setGrade(float);
    void calculateLetterGrade();

private:
    string courseName;
    string letterGrade;
    float grade;
    float points = 0;
};


#endif //UNTITLED1_COURSE_H
