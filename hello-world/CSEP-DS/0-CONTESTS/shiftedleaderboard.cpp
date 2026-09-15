#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int drops = 0;
    int drop_index = -1;

    for (int i = 0; i < n - 1; ++i) {
        if (A[i] > A[i+1]) {
            drops++;
            drop_index = i;
        }
    }

    if (drops == 0) {
        cout << 0 << "\n";
    } else if (drops == 1) {
        if (A[n - 1] < A[0]) {
            cout << n - 1 - drop_index << "\n";
        } else {
            cout << -1 << "\n";
        }
    } else {
        cout << -1 << "\n";
    }

    return 0;
}

/*
A gaming platform maintains a leaderboard where players' scores are stored in strictly increasing order.

To improve the display experience, the platform occasionally moves the first few scores to the end of the list while keeping their relative order unchanged.

Original: 10 20 30 40 50 60

After shifting: 40 50 60 10 20 30 You are given the current leaderboard.

Your task is to determine whether the leaderboard could have been obtained by shifting a sorted array in this manner.

If the arrangement is valid, print the number of left shifts performed.
Otherwise, print -1.
An already sorted leaderboard is considered valid and has 0 shifts.

Input Format

The first line contains an integer N, the number of scores.
The second line contains N space-separated distinct integers.

Constraints

1 ≤ N ≤ 2 × 10^5
-10^9 ≤ A[i] ≤ 10^9
Output Format

Print a single integer:
The number of left shifts if the leaderboard is valid.
Otherwise, print -1.

Sample Input 0

6
3 4 5 6 1 2

Sample Output 0

2
*/