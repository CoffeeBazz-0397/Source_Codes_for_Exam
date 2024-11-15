#include <iostream>
using namespace std;
class PrimeCheck
{
public:
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};
int main()
{
    PrimeCheck check;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (check.isPrime(num))
        cout <<"The number is a prime number." << endl;
    else
        cout << "The number is not a prime number." << endl;

    return 0;
}
