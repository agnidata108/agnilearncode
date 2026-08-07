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
    // using insertion concept
    else {
        for (int i = 0; i < k; i++) {
            int last = arr[l - 1];
            for (int j = l - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            arr[0] = last;
        }
        for (int i = 0; i < l; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}