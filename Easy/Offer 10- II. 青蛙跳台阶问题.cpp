#include <iostream>
using namespace std;

class Solution
{
public:
    int numWays(int n)
    {
        int *arr = new int[n + 5];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        if (n == 0 || n == 1 || n == 2)
        {
            return arr[n];
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {
                arr[i] = (arr[i - 1] + arr[i - 2])%1000000007;
            }
            return arr[n];
        }
    }
};