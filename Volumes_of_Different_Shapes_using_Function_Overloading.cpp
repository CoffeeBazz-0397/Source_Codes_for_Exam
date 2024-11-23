#include <iostream>
#define pi 3.14159
using namespace std;

double volume(double length, double width, double height)
{
    return length * width * height;
}

double volume(double radius, double height)
{
    return pi * radius * radius * height;
}

double volume(double side)
{
    return side * side * side;
}

int main()
{
    double length = 5.0, width = 3.0, height = 4.0;
    cout << "Volume of the rectangle: " << volume(length, width, height) << " cubic units" << endl;

    double radius = 2.5;
    cout << "Volume of the cylinder: " << volume(radius, height) << " cubic units" << endl;

    double side = 3.0;
    cout << "Volume of the cube: " << volume(side) << " cubic units" << endl;

    return 0;
}
