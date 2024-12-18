#include <iostream>
using namespace std;
void insertion(int arr[], int &n, int element, int location)
{
    for (int i = n - 1; i >= location; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[location] = element;
    n++;
}
void deletion(int arr[], int &n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            for (int j = 0; i < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int choice, element, location;
    while (true)
    {
        cout << "Array Operations: " << endl
             << "1. Insertion" << endl
             << "2. Deletion" << endl
             << "3. Display" << endl
             << "4. Exit" << endl;
        cout << "Enter any choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element to insert: ";
            cin >> element;
            cout << "Enter your desired location: ";
            cin >> location;
            insertion(arr, n, element, location);
            cout << "Your new array list is: ";
            show(arr, n);
            break;

        case 2:
            cout << "Enter the element to delete: ";
            cin >> element;
            deletion(arr, n, element);
            cout << "Your new array list is: ";
            show(arr, n);
            break;

        case 3:
            cout << "Your array list is: ";
            show(arr, n);
            break;

        case 4:
            cout << "Exiting... ... ..." << endl;
            return 0;

        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
