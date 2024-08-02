#include <stdio.h>
#include <iostream>

using namespace std;

int leftRotate(int arr[], int n)
{

    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {

        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
int main()
{
    int arr[] = {5, 2, 10, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = leftRotate(arr, n);
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
