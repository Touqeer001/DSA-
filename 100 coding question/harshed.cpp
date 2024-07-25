#include <stdio.h>
#include <iostream>

using namespace std;

int checkHarshed(int num)
{

    int sum = 0;
    int temp = num;
    while (temp != 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    return num % sum == 0;
}
int main()
{
    int num = 153;

    if (checkHarshed(num))
    {
        cout << "Harshed nmber";
    }
    else
    {

        cout << "not harshed";
    }

    return 0;
}