#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 50, 89};
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <size; i++)
    {
        sum = arr[i] + sum;
    }
    cout << sum;

    return 0;
}