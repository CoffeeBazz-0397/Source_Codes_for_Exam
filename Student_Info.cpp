#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    int semester;
    int rollNo;
    string section;
    int marks[5], totalMarks;

public:
    void setName(string n)
    {
        name = n;
    }
    void setSemester(int sem)
    {
        semester = sem;
    }
    void setRoll(int roll)
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
    int getSemester()
    {
        return semester;
    }
    int getRoll()
    {
        return rollNo;
    }
    string getSection()
    {
        return section;
    }
    int getTotal()
    {
        int totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
        return totalMarks;
    }
    void studentInfo()
    {
        cout << "___Student Information___" << endl
             << endl;
        cout << "Name: " << getName() << endl;
        cout << "Semester: " << getSemester() << endl;
        cout << "Roll no: " << getRoll() << endl;
        cout << "Section: " << getSection() << endl;
        cout << "Total marks: " << getTotal() << endl;
    }
};
int main()
{
    int rollNo, semester, marks[5];
    string name, section;
    student s;

    cout << "Enter the name of the student: ";
    getline(cin, name);
    s.setName(name);

    cout << "Enter the semester of the student: ";
    cin >> semester;
    s.setSemester(semester);

    cout << "Enter the roll no: ";
    cin >> rollNo;
    s.setRoll(rollNo);
    cin.ignore();

    cout << "Enter the section: ";
    getline(cin, section);
    s.setSection(section);

    cout << "Enter the marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    s.setMarks(marks);

    s.studentInfo();

    return 0;
}
