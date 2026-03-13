#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> leftsum(n);
        vector<int> rightsum(n);

        for (int i = 1; i < n; i++)
        {
            leftsum[i] = leftsum[i - 1] + nums[i - 1];
        }

        for (int j = n - 2; j >= 0; j--)
        {
            rightsum[j] = rightsum[j + 1] + nums[j + 1];
        }

        for (int k = 0; k < n; k++)
        {
            if (leftsum[k] == rightsum[k])
                return k;
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 1, -1};
    int result = s.pivotIndex(nums);
    cout << result;
}