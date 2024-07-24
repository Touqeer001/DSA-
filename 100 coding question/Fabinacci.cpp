#include <stdio.h>
#include <iostream>

using namespace std;
// int main()
// {
//     int num, sum, a, b, nextTerm;
//     num = 15;
//     a = 0;
//     b = 1;
//     cout << " " << a << " " << b;
//     for (int i = 2; i <= num; i++)
//     {
//         nextTerm = a + b;
//         a = b;
//         b = nextTerm;
//         cout << " " << nextTerm;
//     }

//     return 0;
// }



// USing Recursive method

int Fib(int num)
{
    if (num <= 1)
        return num;
    return (Fib(num - 1) + Fib(num - 2));
}

int main()
{
    int num = 15;
    for (int i = 0; i <= num; i++)
    {

        cout << Fib(i);
    }

    return 0;
}