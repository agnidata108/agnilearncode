#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {   
    int N;
    cin>>N;
    int roll[N];
    for(int i=0; i<N; i++)
    {
        cin>>roll[i];
    }
    int X;
    cin>>X;
    int index=-1;
    for(int i=0; i<N; i++)
    {
        if(roll[i]==X)
        {
            index=i;
            break;
        }
    }
    cout<<index<<"\n";
    return 0;
}
