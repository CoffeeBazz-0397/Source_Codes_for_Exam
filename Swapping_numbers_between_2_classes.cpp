#include <iostream>
using namespace std;
class B;
class A
{
private:
    int numA;

public:
    A(int n)
    {
        numA = n;
    }
    friend void swapnumbers(A &a, B &b);

    void display()
    {
        cout << "Number in class A is " << numA << endl;
    }
};

class B
{
private:
    int numB;

public:
    B(int n)
    {
        numB = n;
    }
    friend void swapnumbers(A &a, B &b);
    void display()
    {
        cout << "Number in class B is " << numB << endl;
    }
};

void swapnumbers(A &a, B &b)
{
    int temp = a.numA;
    a.numA = b.numB;
    b.numB = temp;
}

int main()
{
    A a(15);
    B b(10);

    cout << "Before swapping: ";
    a.display();
    b.display();

    swapnumbers(a, b);

    cout << "After swapping: ";
    a.display();
    b.display();

    return 0;
}