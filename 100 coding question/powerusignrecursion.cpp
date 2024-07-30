#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;
int power(int base, int x)
{
    if (x == 0)
    {
        return 1;

        // return(base*power(base,x-1);)
    }
    return (base * power(base, x - 1));
}

int main()

{
    int base = 5;
    int x = 0;
    cout << power(base, x);

    return 0;
}