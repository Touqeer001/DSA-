// Question:finding the unique element in an array
// input:arr[] = {2, 3, 1, 6, 3, 6, 2};
// outPut:  1

#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int start;
    int end = 7 - start;
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    for (int start = 0; start <= 7; start++)
    {

        if (start == end)
        {
            start++;
            end--;
        }
        else
        {
            cout << arr[start];
        }
    }

    return 0;
}