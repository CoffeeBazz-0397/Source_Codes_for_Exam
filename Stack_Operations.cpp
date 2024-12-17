#include <iostream>
#define max 5
using namespace std;
int stack[max], top = -1;
void push(int value)
{
    if (top >= max - 1)
    {
        cout << "Stack Overflow." << " Cannot insert the value." << endl;
    }
    else
    {
        stack[++top] = value;
        cout << value << " is inserted into the stack." << endl;
    }
}
void pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow. Cannot delete any value into an empty stack." << endl;
    }
    else
    {
        cout << stack[top--] << " is removed from the stack." << endl;
    }
}
void show()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}
int main()
{
    int choice, value;
    while (true)
    {
        cout << endl
             << "Stack operations: " << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Display" << endl
             << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            cout << "Exiting... ... ..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}