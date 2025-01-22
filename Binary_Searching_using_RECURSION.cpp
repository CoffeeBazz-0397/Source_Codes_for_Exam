// Binary Search using RECURSION
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int element)
{
    if (n <= 0)
    {
        return -1;
    }
    int mid = n / 2;
    if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] < element)
    {
        return binarySearch(arr + mid + 1, n - mid - 1, element);
    }
    else
    {
        int res = binarySearch(arr, mid, element);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return res;
        }
    }
}
int main()
{
    int n, element;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> element;

    int result = binarySearch(arr, n, element);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << result;
    }
    return 0;
}
