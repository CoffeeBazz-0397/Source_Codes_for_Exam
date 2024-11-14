#include<iostream>
using namespace std;
int Search(int arr[],int n,int element)
{
    int beginning=0;
    int ending=n;
    while(beginning<=ending)
    {
        int middle=(beginning+ending)/2;
        if(arr[middle]==element)
          return middle;
        else if(arr[middle]>element)
          ending=middle-1;
        else
          beginning=middle+1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element to search: ";
    cin>>element;
    cout<<"The element you're searching is at index number: "<<Search(arr,n,element);
    return 0;
}