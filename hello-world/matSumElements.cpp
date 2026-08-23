#include<iostream>
#include<vector>
using namespace std;
/*Sum of Elements in a Matrix*/
int main()
{
    cout<<"Enter the number of rows and columns:\n";
    int a, b;
    cin>>a>>b;
    vector<vector<int>> arr(a, vector<int>(b));
    cout<<"Enter the elements of the matrix: ";
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of elements in the matrix is: "<<sum;
    return 0;
}