class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
 if (matrix.size() == 0)
    {
        return false;
    }
    if (matrix[0].size() == 0)
    {
        return false;
    }
    const int row = matrix.size() - 1; // 方便数组处理
    const int col = matrix[0].size() - 1;
    int n = row;
    int m = col;
    while (target != matrix[row - n][m])
    {
        if (m == 0)
        {
            for (int i = row - n; i <= row; i++)
            {
                if (target == matrix[i][m])
                {
                    return true;
                }
            }
            return false;
        }
        if (n == 0)
        {
            for (int i = m; i >= 0; i--)
            {
                if (target == matrix[row - n][i])
                {
                    return true;
                }
            }
            return false;
        }
        if (target < matrix[row - n][m])
        {
            m--;
        }
        else if (target > matrix[row - n][m])
        {
            n--;
        }
    }
         return true;
    }
};
