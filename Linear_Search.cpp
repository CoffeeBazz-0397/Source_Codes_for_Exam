#include<iostream>
using namespace std;
int LinearSearch(int arr[],int N,int elements)
{
    for(int i=0;i<N;i++)
    {
        if(arr[i]==elements)
        return i;
    }
    return -1;
}
int main()
{
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;
    int arr[N];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int elements;
    cout<<"Enter the element that you want to find: ";
    cin>>elements;
    
    cout<<"Your desired element is at index number: "<<LinearSearch(arr,N,elements);

    return 0;
}