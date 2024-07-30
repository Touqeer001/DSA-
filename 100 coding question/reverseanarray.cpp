#include <stdio.h>
#include <iostream>
using namespace std;

void recursiveReverse(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        recursiveReverse(arr, start + 1, end - 1);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 50, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = size - 1;

    // while (start < end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << " " << arr[i];
    // }

    recursiveReverse(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}