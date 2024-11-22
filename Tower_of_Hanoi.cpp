#include <iostream>
using namespace std;
void Tower(int n, char beg, char aux, char end)
{
    if (n == 1)
    {
        cout << beg << " ---> " << end << endl;
        return;
    }
    Tower(n - 1, beg, end, aux);
    cout << beg << " ---> " << end << endl;
    Tower(n - 1, aux, beg, end);
}
int main()
{
    int n;
    cout << "Enter tehe number of disks: ";
    cin >> n;
    Tower(n, 'A', 'B', 'C');
    return 0;
}