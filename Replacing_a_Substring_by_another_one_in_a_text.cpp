#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string text, pattern1, pattern2;

    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern1: ";
    getline(cin, pattern1);
    cout << "Enter the pattern2: ";
    getline(cin, pattern2);

    int k = text.find(pattern1);
    int l = pattern1.length();

    while (k != string::npos)
    {
        text.replace(k, l, pattern2);
        k = text.find(pattern1);
    }

    cout << endl
         << text << endl;

    return 0;
}