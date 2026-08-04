#include <stdio.h>
    void insertionSort(int arr[], int n)
    {
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
    void printArray(int arr[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    int main()
    {
        int arr[] = {12, 11, 13, 5, 6};
        int n = sizeof(arr) / sizeof(arr[0]);
        insertionSort(arr, n);
        printArray(arr, n);
        return 0;
}

/*
    Insertion Sort Algorithm
    Time Complexity: O(n^2)
    Space Complexity: O(1)

    In C++ language, we can use the following code to implement Insertion Sort:
    
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // Insertion Sorting
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<"Sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
    
*/