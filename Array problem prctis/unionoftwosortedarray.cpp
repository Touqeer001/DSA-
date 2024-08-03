#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> unionOFArray(int arr1[], int arr2[], int size1, int size2)
{
    vector<int> result;
    int i = 0, j = 0;
    while (i <size1 && i <size2)
    {
        if (arr1[i] < arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else
        {
            result.push_back(arr2[j]);
            j++;
        }
        while (i < size1)
        {
            result.push_back(arr1[i]);
            i++;
        }
        while (i < size2)
        {
            result.push_back(arr2[i]);
            j++;
        }
        return result;
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 5, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::vector<int> result = unionOFArray(arr1, arr2, size1, size2);

    std::cout << "Union of the arrays: ";
    for (int element : result)
    {
        std::cout << element << " ";
    }

    return 0;
}
