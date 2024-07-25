#include <stdio.h>
#include <iostream>

using namespace std;

int fac(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;

        return fact;
    }
}

    int strong(int num) {
        int digit, sum = 0;
        int temp = num;
        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + fac(digit);
            temp = temp / 10;
        }
        retun sum == num;
    }

int main()
{
    int num = 145;
    if (strong(num))
    {
        cout << num << "is strong number";
    }
    else
    {
        cout << "Not a strong number";
    }

    return 0;
}