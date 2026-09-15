#include<iostream>
using namespace std;
/*Take matrix as user input and print row major & column major order*/
int main()
{
    int n, m;
    cout<<"Enter the number of rows and columns:\n";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of the matrix:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Row Major Order:";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Column Major Order: ";
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}