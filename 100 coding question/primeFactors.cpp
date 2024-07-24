
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

void primFactor(int num)
{
    while (num % 2 == 0)
    {
        cout << 2;
        num = num / 2;
    }

    // this for loop for number must be odd.
    for (int i = 3; i <= sqrt(num); i = i + 2)
    {
        while (num % i == 0)
        {

            cout << i;
            num = num / i;
        }
    }

    if (num > 2)
        cout << num;
}
int main()
{
    int num = 315;
    primFactor(num);

    return 0;
}

// Example with n = 315
// Initial Value: n = 315

// Step 1: Handle the Factor of 2:

// 315 % 2 != 0 (315 is not divisible by 2), so skip this step.
// Step 2: Handle Odd Factors:

// i = 3:
// 315 % 3 == 0, print 3, divide 315 by 3 to get 105.
// 105 % 3 == 0, print 3, divide 105 by 3 to get 35.
// 35 % 3 != 0 (35 is not divisible by 3), move to next i.
// i = 5:
// 35 % 5 == 0, print 5, divide 35 by 5 to get 7.
// 7 % 5 != 0 (7 is not divisible by 5), move to next i.
// i = 7:
// 7 % 7 == 0, print 7, divide 7 by 7 to get 1.
// 1 % 7 != 0 (1 is not divisible by 7), loop terminates as i exceeds sqrt(1).
// Step 3: Handle Prime Numbers Greater Than 2:

// n = 1 (which is not greater than 2), so skip this step.
// Output
// The prime factors of 315 are 3 3 5 7. The function prints 3 3 5 7 .