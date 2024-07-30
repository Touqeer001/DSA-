#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int largestElment(int num, int arr[])
{
    if (num == 1)
    {
        return arr[0];
    }
    return max(arr[num - 1], largestElment(num - 1, arr));
}
int main()
{

    int arr[] = {10, 45, 100, 34, 67};
    int num = sizeof(arr) / sizeof(arr[0]);
    cout << largestElment(num, arr);

    return 0;
}