#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Duplicate elements in array are:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}