#include<iostream>
using namespace std;
//WAP to reverse the elements in an array and then find the middle of it
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0; i<n; i++)
    {
       cin>>arr[i]; 
    }
    for(int i=0; i<n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=temp;
    }
    cout<<"Reversed elements:\n";
    for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" "; 
    }
    cout<<endl;
    if(n%2==1) 
    {
        cout<<"Middle element is: "<<arr[n/2]<<endl;
    }
    else
    {
        cout<<"Middle elements are: "<<arr[n/2-1]<<" and "<<arr[n/2]<<endl;
    }
}