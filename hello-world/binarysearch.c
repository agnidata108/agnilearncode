#include <stdio.h>
/* Binary Search can be performed on a sorted array.
It works by repeatedly dividing the search interval in half.
If the value of the search key is less than the item in the middle of the interval,
narrow the interval to the lower half. Otherwise, narrow it to the upper half.
Repeatedly check until the value is found or the interval is empty.
*/
int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the element to search: ");
    scanf("%d",&x);
    int result = binarySearch(arr, n, x);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}

/*
    In C++ the binary search can be implemented by following code:
    #include <iostream>
    #include <vector>
    int binarySearch(const std::vector<int>& arr, int x)
    {
        int low = 0, high = arr.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
                return mid;
            else if (arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
    int main()
    {
        int n;
        std::cout << "Enter the size of array: ";
        std::cin >> n;
        std::vector<int> arr(n);
        std::cout << "Enter the elements of array:\n";
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        int x;
        std::cout << "Enter the element to search: ";
        std::cin >> x;
        int result = binarySearch(arr, x);
        if (result == -1)
            std::cout << "Element is not present in array\n";
        else
            std::cout << "Element is present at index " << result << "\n";
        return 0;
    }
*/