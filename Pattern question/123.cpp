#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)

    {
        for (int j = 4; j > i; j--)

        {
            cout << 4 - j + 1;
        }

        cout << endl;
    }

    return 0;
}