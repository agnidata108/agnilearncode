#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]*arr[i]*arr[i];
    }
    cout<<"The cube of elements of the array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}