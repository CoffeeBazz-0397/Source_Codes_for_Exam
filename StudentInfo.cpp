#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string semester;
    int rollNo;
    string section;
    int marks[5];

public:
    void setName(string n)
    {
        name = n;
    }

    void setSemester(string sem)
    {
        semester = sem;
    }

    void setRollNo(int roll)
    {
        rollNo = roll;
    }

    void setSection(string sec)
    {
        section = sec;
    }

    void setMarks(int m[])
    {
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }

    string getName()
    {
        return name;
    }

    string getSemester()
    {
        return semester;
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getSection()
    {
        return section;
    }

    int *getMarks()
    {
        return marks;
    }

    int calculateTotalMarks()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        return total;
    }

    void studentInfo()
    {
        cout << "\n__Student Information__" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Semester: " << getSemester() << endl;
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Section: " << getSection() << endl;
        cout << "Total Marks: " << calculateTotalMarks() << endl;
    }
};

int main()
{
    Student s;
    string name, semester, section;
    int rollNo;
    int marks[5];

    cout << "Enter the name of the student: ";
    getline(cin, name);
    s.setName(name);

    cout << "Enter the semester: ";
    cin >> semester;
    s.setSemester(semester);

    cout << "Enter the roll no: ";
    cin >> rollNo;
    s.setRollNo(rollNo);

    cin.ignore();

    cout << "Enter the section: ";
    getline(cin, section);
    s.setSection(section);

    cout << "Enter the marks of the subjects (5 values): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    s.setMarks(marks);

    s.studentInfo();

    return 0;
}
