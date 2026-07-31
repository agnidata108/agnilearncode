#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter size of array:\n";
    cin>>s;
    cout<<"Enter elements of array:\n";
    int arr[s];
    int esum=0;
    int oprod=1;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
        if(i%2==0) esum+=arr[i];
        else oprod*=arr[i];
    }
    cout<<"Sum of even-index elements is: "<<esum<<endl;
    cout<<"Product of odd-index elements is: "<<oprod<<endl;
    return 0;
}