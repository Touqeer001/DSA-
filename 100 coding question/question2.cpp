// Even or Odd number

#include <stdio.h>
#include <iostream>

// using namespace std;
// int main()
// {
//     int num = 10;
//     int sum = 0;
//     for (int i = 0; i <= num; i++)
//     {
//         sum = i + sum;
//     }
//     cout << sum;

//     return 0;
// }

// Find the Sum of Numbers in a Given Range in C++

using namespace std;

int calSum(int a, int b)
{

    if (a > b)
    {
        return 0;
    }
    return a + calSum(a + 1, b);
}
int main()
{
    int a = 10;
    int b = 15;
    int sum = calSum(a, b);
    cout << sum;

    return 0;
}
