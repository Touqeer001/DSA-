#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int consecutiveOne(vector<int> nums)
{
    int maxCount = 0;
    int currrentCount = 0;
    for (int num : nums)
    {
        if (num == 1)
        {
            currrentCount++;
        }
        else
        {
            if (currrentCount > maxCount)
            {
                maxCount = currrentCount;
            }
            currrentCount = 0;
        }
    }
    if (currrentCount > maxCount)
    {
        maxCount = currrentCount;
    }
    return maxCount;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1};

    int maxConsecutive = consecutiveOne(nums);
    cout << maxConsecutive;

    return 0;
}
