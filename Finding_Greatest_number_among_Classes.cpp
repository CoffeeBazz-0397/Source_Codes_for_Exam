#include <iostream>
using namespace std;
class B;
class C;
class A
{
private:
    int numA;

public:
    A(int n) : numA(n) {}

    friend void findGreatest(A &a, B &b, C &c);
};

class B
{
private:
    int numB;

public:
    B(int n) : numB(n) {}

    friend void findGreatest(A &a, B &b, C &c);
};

class C
{
private:
    int numC;

public:
    C(int n) : numC(n) {}

    friend void findGreatest(A &a, B &b, C &c);
};

void findGreatest(A &a, B &b, C &c)
{
    int greatest = a.numA;

    if (b.numB > greatest)
    {
        greatest = b.numB;
    }

    if (c.numC > greatest)
    {
        greatest = c.numC;
    }
    cout << "The greatest number is " << greatest << endl;
}

int main()
{
    A a(15);
    B b(6);
    C c(35);

    findGreatest(a, b, c);

    return 0;
}