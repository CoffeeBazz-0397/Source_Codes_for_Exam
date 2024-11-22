#include <iostream>
using namespace std;
class B;
class A
{
public:
    int a, b;
    A(int x, int y) : a(x), b(y) {}
    friend int maximum(A, B);
    friend int minimum(A, B);
};
class B
{
public:
    int c, d;
    B(int p, int q) : c(p), d(q) {}
    friend int maximum(A, B);
    friend int minimum(A, B);
};
int maximum(A objA, B objB)
{
    int large = max(max(objA.a, objA.b), max(objB.c, objB.d));
    return large;
}
int minimum(A objA, B objB)
{
    int small = min(min(objA.a, objA.b), min(objB.c, objB.d));
    return small;
}
int main()
{
    A objA(526, 965);
    B objB(52, 896);
    cout << "a = " << objA.a << "    b = " << objA.b << endl;
    cout << "c = " << objB.c << "    d = " << objB.d << endl;
    cout << "Maximum = " << maximum(objA, objB) << "\nMinimum = " << minimum(objA, objB) << endl
         << endl
         << endl;
    
    return 0;
}