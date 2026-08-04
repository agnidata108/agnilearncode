#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    if(!(cin>>N)) return 0;
    vector<int> str(N);
    for(int i=0; i<N; i++)
    {
        cin>>str[i];
    }
    vector<int> leaders;
    int max=-1;
    for(int i=N-1; i>=0; i--)
    {
        if(str[i]>=max)
        {
            leaders.push_back(str[i]);
            max=str[i];
        }
    }
    for(int i=leaders.size()-1; i>=0; i--)
    {
        cout<<leaders[i];
        if(i>0) cout<<" ";
    }
    cout<<"\n";
    return 0;
}