#include<iostream>
using namespace std;
/*Find the transpose of a matrix*/
int main()
{
    int n, m;
    cout<<"Enter the number of rows and columns:\n";
    cin>>n>>m;
    int arr[n][m], trans[m][n];
    cout<<"Enter the elements of the matrix:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    cout<<"Original Matrix is:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<"Transpose of the matrix is:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}