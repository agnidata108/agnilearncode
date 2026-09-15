#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    if(!(cin>>n)) return 0;
    
    vector<int> A(n);
    long long sum=0;
    
    for (int i=0; i<n; ++i)
    {
        cin>>A[i];
        sum+=A[i];
    }

    long long lsum=0;
    for (int i=0; i<n; ++i)
    {
        long long rsum =sum-lsum-A[i];
        if(lsum==rsum)
        {
            cout<<i;
            return 0;
        }
        lsum+=A[i];
    }
    cout<<-1;
    return 0;
}

/*
*/