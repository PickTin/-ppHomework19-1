#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    char name[100];
    double avgmark;
    char school[50];
    char group[10];
public:
    Student();
    Student(const char* name, double avgmark, const char* school, const char* group);
    ~Student();

    void showInfo();

   
    const char* getName() const;
    double getAvgMark() const;
    const char* getSchool() const;
    const char* getGroup() const;

  
    void setName(const char* name);
    void setAvgMark(double avgmark);
    void setSchool(const char* school);
    void setGroup(const char* group);
};
