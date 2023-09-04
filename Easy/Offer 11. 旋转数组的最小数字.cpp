#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minArray(vector<int> &numbers)
    {
        for (int i = numbers.size() - 1; i >= 0; --i)
        {
            int j = i - 1;
            if (j < 0)
            {
                return numbers[i];
            }
            else
            {
                if (numbers[j] > numbers[i])
                {
                    return numbers[i];
                }
            }
        }
    }
};