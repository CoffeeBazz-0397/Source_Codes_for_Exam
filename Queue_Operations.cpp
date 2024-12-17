#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> q;
    int choice, value;

    while (true)
    {
        cout << "\nQueue operations menu: " << endl
             << "1. Enqueue" << endl
             << "2. Dequeue" << endl
             << "3. Show" << endl
             << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            q.push_back(value);
            break;

        case 2:
            if (!q.empty())
            {
                cout << q.front() << " is deleted from the queue" << endl;
                q.pop_front();
            }
            else
            {
                cout << "Queue is empty" << endl;
            }
            break;

        case 3:
            if (!q.empty())
            {
                cout << "Queue elements: ";
                for (int item : q)
                {
                    cout << item << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "Queue is empty" << endl;
            }
            break;

        case 4:
            cout << "Exiting... ... ..." << endl;
            return 0;

        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    }

    return 0;
}
