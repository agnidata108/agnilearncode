#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    
    int left = 0;
    int right = n - 1;
    int insert_index = n;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            
            insert_index = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    cout << insert_index;
    return 0;
}

/*
A school has arranged students in ascending order of their roll numbers.

A new student arrives with a roll number X.

Your task is to determine:

If the roll number already exists, return its index.
Otherwise, return the index where the student should be inserted so that the order remains sorted.
Your solution must run in O(log N).

Input Format

First line contains integer N.
Second line contains N sorted integers.
Third line contains integer X.

Constraints

1 ≤ N ≤ 2 × 10^5

-10^9 ≤ A[i] ≤ 10^9

-10^9 ≤ X ≤ 10^9

Output Format

Print the required index.

Sample Input 0

5
1 3 5 6 9
5

Sample Output 0

2
*/