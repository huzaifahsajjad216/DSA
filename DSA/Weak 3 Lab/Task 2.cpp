#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    FullTimeEmployee fullTime(80000);

    PartTimeEmployee partTime(80, 500);

    cout << "Full-Time Employee Salary: "
         << fullTime.calculateSalary()
         << endl;

    cout << "Part-Time Employee Salary: "
         << partTime.calculateSalary()
         << endl;

    return 0;
}