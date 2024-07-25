
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int num = 9;
    int squre = (num * num);
    int digit = squre % 10;
    if (num == digit)
    {
        ;
        cout << squre << "It is automorphic";
    }
    else
    {
        cout << squre << "not automorphic";
    }

    return 0;
}