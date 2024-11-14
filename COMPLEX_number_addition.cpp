#include <iostream>
using namespace std;
class COMPLEX
{
private:
    double real;
    double imaginary;

public:
    COMPLEX(double r = 0, double i = 0) : real(r), imaginary(i) {}
    void show() const
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
    COMPLEX add(const COMPLEX &other) const
    {
        return COMPLEX(real + other.real, imaginary + other.imaginary);
    }
};

int main()
{
    double r1, i1, r2, i2;
    cout << "Enter the first complex number: ";
    cin >> r1 >> i1;
    COMPLEX c1(r1, i1);
    cout << "Enter the second complex number: ";
    cin >> r2 >> i2;
    COMPLEX c2(r2, i2);
    COMPLEX c3 = c1.add(c2);
    cout << "First Complex Number: ";
    c1.show();
    cout << "Second Complex Number: ";
    c2.show();
    cout << "Sum of the Complex Numbers: ";
    c3.show();

    return 0;
}
