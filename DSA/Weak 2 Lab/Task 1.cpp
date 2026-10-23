#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
    Circle circle(5);

    Rectangle rectangle(10, 4);

    cout << "Circle Area: "
         << circle.area() << endl;

    cout << "Rectangle Area: "
         << rectangle.area() << endl;

    return 0;
}