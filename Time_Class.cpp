#include <iostream>
using namespace std;

class Time
{
public:
    int hours;
    int minutes;
    
   void inputTime()
    {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    
    void addTime(const Time &t1, const Time &t2)
    {
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + minutes / 60;
        minutes %= 60;
    }
    
    void displayTime()
    {
        cout << hours << " : " << (minutes < 10 ? "0" : "") << minutes << endl;
    }
};

int main()
{
    Time t1, t2, t3;
    cout << "Enter time for first object:" << endl;
    t1.inputTime();

    cout << "Enter time for second object:" << endl;
    t2.inputTime();

    t3.addTime(t1, t2);
    cout << "Sum of the two times is: ";
    t3.displayTime();

    return 0;
}
