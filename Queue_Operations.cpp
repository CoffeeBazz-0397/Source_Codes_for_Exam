#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> q;
    int choice, value;

    while (true)
    {
        cout << "\nQueue Operations Menu:\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to insert: ";
            cin >> value;
            q.push_back(value);
            cout << value << " inserted into the queue.\n";
            break;

        case 2:
            if (!q.empty())
            {
                cout << q.front() << " deleted from the queue.\n";
                q.pop_front();
            }
            else
            {
                cout << "Queue is empty. Cannot delete.\n";
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
                cout << "Queue is empty.\n";
            }
            break;

        case 4:
            cout << "Exiting the program.\n";
            return 0;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
