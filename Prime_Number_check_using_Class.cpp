#include <iostream>
using namespace std;
class PrimeCheck
{
public:
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};
int main()
{
    PrimeCheck checker;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (checker.isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
