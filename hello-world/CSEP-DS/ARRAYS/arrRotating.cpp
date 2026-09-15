#include <iostream>
using namespace std;
int main() {
    int l, k;
    cout << "Enter length of array and number of rotations: \n";
    cin >> l >> k;
    int arr[l];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < l; i++) {
        cin >> arr[i];
    }

    k = k % l;

    if (k == 0) {
        for (int i = 0; i < l; i++) {
            cout << arr[i] << " ";
        }
    }
    else {
        for (int i = 0; i < l; i++) {
            cout << arr[(i + l - k) % l] << " ";
        }
    }
    cout << endl;
    return 0;
}