#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}