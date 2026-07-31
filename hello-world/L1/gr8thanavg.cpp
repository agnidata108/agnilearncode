#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[n], sum=0;
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg=(float)sum/n;
    cout<<"Average of array elements is: "<<avg<<endl;
    cout<<"Elements greater than average are:\n";
    for(int i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}