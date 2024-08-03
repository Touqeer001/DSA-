#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int sortArray(vector<int> &num)
{
    int low = 0;
    int mid = 0;
    int high = num.size() - 1;
    while (mid <= high)
    {
        if (num[mid] == 0)
        {
            swap(num[low], num[mid]);
            low++;
            mid++;
        }
        else if (num[mid] == 1)
        {
            mid++;
        }
        else if (num[mid] == 2)
            ;
        {
            swap(num[mid], num[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> num = {0, 2, 2, 1, 1, 0};
    sortArray(num);
    cout << "Sorted array: ";
    for (int n : num)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}