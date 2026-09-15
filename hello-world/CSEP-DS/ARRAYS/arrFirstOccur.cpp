#include<iostream>
using namespace std;
/*First Occurrence of an Element in a Sorted Array*/
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    int low = 0, high = n - 1, result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            high = mid - 1;
        }
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (result == -1)
        cout << "Element is not present in array\n";
    else
        cout << "First occurrence of element is at index " << result << endl;
    return 0;
}