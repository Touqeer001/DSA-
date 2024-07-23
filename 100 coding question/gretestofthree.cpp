// C++ Program to check whether a number is positive or negative

// For Instance,
// Input : num = 10
// Output :The number is Positive

#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int first, second, third;
    first = 10;
    second = 240;
    third = 30;

    int result = max(first, max(second, third));
    cout << result;

    return 0;
}