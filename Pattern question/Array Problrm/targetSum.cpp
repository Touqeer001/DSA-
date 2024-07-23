#include <stdio.h>
#include <iostream>

using namespace std;
#include <vector>

void pairSum(vector<int> &arr, int &first, int &last, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left < right)
    {
        int currSum = arr[left] + arr[right];
        if (currSum == target)
        {
            first = arr[left];
            last = arr[right];
            return;
        }
        else if (currSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    // No pair found with the given sum, set both values to -1
    first = -1;
    last = -1;
}

int main()
{
    // Example usage
    std::vector<int> arr = {1, 3, 4, 7, 8, 9};
    int targetSum = 4;

    int first, second;
    pairSum(arr, first, second, targetSum);

    if (first != -1 && second != -1)
    {
        std::cout << "Pair with the sum " << targetSum << ": {" << first << ", " << second << "}" << std::endl;
    }
    else
    {
        std::cout << "No pair found with the sum " << targetSum << std::endl;
    }

    return 0;
}