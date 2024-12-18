#include <iostream>
using namespace std;
double area(double a)
{
    return 3.14159 * a * a;
}
double area(double a, double b)
{
    return a * b;
}
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    double result = s * (s - a) * (s - b) * (s - c);
    return result;
}
int main()
{
    int choice, a, b, c;
    cout << endl
         << "___Shapes___" << endl
         << endl
         << "1. Circle" << endl
         << "2. Triangle" << endl
         << "3. Rectangle" << endl
         << endl
         << "Enter the shape: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the parameters of the circle: ";
        cin >> a;
        cout << "The area of the circle is: " << area(a) << endl;
        break;

    case 2:
        cout << "Enter the parameters of the triangle: ";
        cin >> a >> b >> c;
        cout << "The area of the triangle is: " << area(a, b, c) << endl;
        break;

    case 3:
        cout << "Enter the parameters of the rectangle: ";
        cin >> a >> b;
        cout << "The area of the rectangle is: " << area(a, b) << endl;
        break;

    default:
        cout << "Invalid choice." << endl;
        break;
    }
    return 0;
}