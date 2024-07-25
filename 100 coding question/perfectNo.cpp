#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int num = 28;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << "PerfecrNmber";
    }
    else
    {
        cout << "Not a perfect";
    }

    return 0;
}