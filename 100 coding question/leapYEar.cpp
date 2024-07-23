#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int year = 2021;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "The year is Leap Year";
    }
    else
    {
        cout << " NOt Leap Year";
    }

    return 0;
}