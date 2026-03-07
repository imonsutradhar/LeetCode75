#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> p;
        for (int i = 0; i < nums.size(); i++)
        {
            int total = 1;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j)
                {
                    total *= nums[j];
                }
            }
            p.push_back(total);
        }
        return p;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = s.productExceptSelf(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}