#include <iostream>
using namespace std;
int factorial(int n)
{
    int result = 1;
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return result;
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;

    return 0;
}