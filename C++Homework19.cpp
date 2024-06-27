#include <iostream>
#include "Student.h"

int main()
{
    Student a;
    Student b("Varichev Matvii", 10, "ITSTEP", "P34");

    a.showInfo();
    b.showInfo();

    
    cout << "Using accessors:" << endl;
    cout << "Name of b: " << b.getName() << endl;
    cout << "Average Mark of b: " << b.getAvgMark() << endl;
    cout << "School of b: " << b.getSchool() << endl;
    cout << "Group of b: " << b.getGroup() << endl;

    cout << "\nModifying b's data..." << endl;
    b.setName("Ivanov Ivan");
    b.setAvgMark(8.5);
    b.setSchool("Other School");
    b.setGroup("P35");

    cout << "\nNew info of b:" << endl;
    b.showInfo();

    return 0;
}
