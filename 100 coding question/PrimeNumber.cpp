

#include <stdio.h>
#include <math.h>

#include <iostream>
using namespace std;

// int reverseNum(int num, int reverse)
// {

//     if (num == 0)
//         return reverse;
//     int temp = num % 10;
//     reverse = reverse * 10 + temp;

//     return reverseNum(num / 10, reverse);
// }

int main()
{
    int num = 12321;
    int reverse = 0;
    int temp, rem;
    temp = num;

    while (num != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    if (num == reverse)
    {
        cout << "Number is polindrom";
    }
    else
    {

        cout << "Not a polindrom";
    }
    return 0;
}
