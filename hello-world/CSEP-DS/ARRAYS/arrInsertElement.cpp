#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:\n";
    cin>>n;
    int in;
    cout<<"How many elements you want to insert?\n";
    cin>>in;
    n+=in;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n-in;i++)
    {
        cin>>arr[i];
    }
    int newElement;
    cout<<"Enter new element to be inserted:\n";
    cin>>newElement;
    int position;
    cout<<"Enter position where new element is to be inserted:\n";
    cin>>position;
    for(int i=n-1; i>=position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=newElement;
    cout<<"Array after insertion:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}