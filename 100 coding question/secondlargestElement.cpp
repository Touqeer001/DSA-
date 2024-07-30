#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int SecondLargest(int arr[], int size)
{

    int pahlaNumber = arr[0];
    int dusraNum = arr[1];
    if (dusraNum > pahlaNumber)
    {
        swap(pahlaNumber, dusraNum);
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > pahlaNumber)
        {
            dusraNum = pahlaNumber;
            pahlaNumber = arr[i];
        }
        else if (arr[i] > dusraNum)
        {
            dusraNum = arr[i];
        }
    }
    cout << "The second-largest element in the array is: " << dusraNum << std::endl;
}

int main()
{

    int arr[] = {3, 2, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    SecondLargest(arr, size);

    return 0;
}