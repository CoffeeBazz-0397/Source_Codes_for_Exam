#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    const char *source = "source.txt";
    const char *destination = "destination.txt";

    ifstream src(source, ios::in); 
    ofstream dest(destination, ios::app); 

    if (!src.is_open() || !dest.is_open())
    {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string line;
    while (getline(src, line))
    {
        dest << line << endl;
    }

    src.close();
    dest.close();

    cout << "Contents of " << source << " have been appended to " << destination << endl;
    
    return 0;
}
