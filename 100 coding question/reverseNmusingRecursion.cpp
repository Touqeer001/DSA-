#include <stdio.h>
#include <iostream>
using namespace std;
void reverse(int num)
{

    if (num < 10)
    {
        cout << num;
        return;
    }
    else
    {
        cout << num % 10;
        reverse(num / 10);
    }
}

int main()
{

    int num = 12345;
    reverse(num);

    return 0;
}