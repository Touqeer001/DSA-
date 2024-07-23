

#include <stdio.h>
#include <math.h>

#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    if (num < 2)
    {
        cout << "The number is not a prime";
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "not Prime number";
        }
        else
        {
            cout << "prim num";
        }
    }

    return 0;
}