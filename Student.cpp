#include "Student.h"

Student::Student()
{
    strcpy_s(name, 100, "Shevchenko Taras Hrygorovich");
    avgmark = 12;
    strcpy_s(school, 50, "ITSTEP");
    strcpy_s(group, 10, "P34");
}

Student::Student(const char* name, double avgmark, const char* school, const char* group)
{
    strcpy_s(this->name, 100, name);
    this->avgmark = avgmark;
    strcpy_s(this->school, 50, school);
    strcpy_s(this->group, 10, group);
}

Student::~Student()
{
}

void Student::showInfo()
{
    cout << "Name: " << name << endl;
    cout << "Average Mark: " << avgmark << endl;
    cout << "School: " << school << endl;
    cout << "Group: " << group << endl;
}


const char* Student::getName() const { return name; }
double Student::getAvgMark() const { return avgmark; }
const char* Student::getSchool() const { return school; }
const char* Student::getGroup() const { return group; }


void Student::setName(const char* name) { strcpy_s(this->name, 100, name); }
void Student::setAvgMark(double avgmark) { this->avgmark = avgmark; }
void Student::setSchool(const char* school) { strcpy_s(this->school, 50, school); }
void Student::setGroup(const char* group) { strcpy_s(this->group, 10, group); }
