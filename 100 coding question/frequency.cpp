#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n] = {0};

    for (int i = 0; i < n; i++)
    {
        if (visited[i] != 1)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }

    return 0;
}
