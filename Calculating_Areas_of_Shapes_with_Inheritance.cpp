#include <iostream>
using namespace std;

class Area
{
public:
    double height, width;

    Area(double h, double w) : height(h), width(w) {}
};

class Rectangle : public Area
{
public:
    Rectangle(double h, double w) : Area(h, w) {}

    double area()
    {
        return height * width;
    }
};

class Isosceles : public Area
{
public:
    Isosceles(double h, double w) : Area(h, w) {}

    double area()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle r(3.9, 9.7);
    Isosceles t(2.7, 7.0);

    cout << "Area of Rectangle: " << r.area() << endl;
    cout << "Area of Isosceles Triangle: " << t.area() << endl;

    return 0;
}
