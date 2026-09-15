#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    if(!(cin>>N)) return 0;
    vector<int> height(N);
    for(int i=0; i<N; i++)
    {
        cin>>height[i];
    }
    bool isSafe=true;
    for(int i=0; i<N-1; i++)
    {
        if(height[i]>height[i+1])
        {
            isSafe=false;
            break;
        }
    }
    if(isSafe) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}