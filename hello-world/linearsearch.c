#include <stdio.h>
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
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
    int result = linearSearch(arr, n, x);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}

/*
    In C++ the linear search can be implemented by following code:
    #include <iostream>
    #include <vector>
    int linearSearch(const std::vector<int>& arr, int x)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
                return i;
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
        int result = linearSearch(arr, x);
        if (result == -1)
            std::cout << "Element is not present in array\n";
        else
            std::cout << "Element is present at index " << result << "\n";
        return 0;
    }
*/