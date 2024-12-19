#include <iostream>
using namespace std;

class complex
{
private:
    int real, imaginary;

public:
    void setNumber(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    friend complex operator+(complex obj1, complex obj2);
    void printNumber()
    {
        if (imaginary >= 0)
        {
            cout << real << " + " << imaginary << "i" << endl;
        }
        else
        {
            cout << real << " - " << -imaginary << "i" << endl;
        }
    }
};

complex operator+(complex obj1, complex obj2)
{
    complex obj3;
    obj3.setNumber(obj1.real + obj2.real, obj1.imaginary + obj2.imaginary);
    return obj3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(3, 2);
    c2.setNumber(1, 5);
    sum = c1 + c2;
    cout << "First complex number: ";
    c1.printNumber();
    cout << "Second complex number: ";
    c2.printNumber();
    cout << "Sum of the complex numbers: ";
    sum.printNumber();
    return 0;
}
