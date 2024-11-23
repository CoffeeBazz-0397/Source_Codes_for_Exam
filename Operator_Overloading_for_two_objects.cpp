#include <iostream>
using namespace std;

class Float
{
public:
    float number;
    Float(float n = 0.0) : number(n) {}

    Float operator+(const Float &obj) const
    {
        return Float(number + obj.number);
    }

    Float operator-(const Float &obj) const
    {
        return Float(number - obj.number);
    }

    Float operator*(const Float &obj) const
    {
        return Float(number * obj.number);
    }

    Float operator/(const Float &obj) const
    {
        return Float(number / obj.number);
    }

    void display() const
    {
        cout << number << endl;
    }
};

int main()
{
    Float f1(10.5), f2(2.5);

    Float sum = f1 + f2;
    Float diff = f1 - f2;
    Float prod = f1 * f2;
    Float quot = f1 / f2;

    cout << "f1 + f2 = ";
    sum.display();
    cout << "f1 - f2 = ";
    diff.display();
    cout << "f1 * f2 = ";
    prod.display();
    cout << "f1 / f2 = ";
    quot.display();

    return 0;
}
