#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     void moveZeroes(vector<int> &nums) { 
//         vector<int> arr(nums.size(), 0); 
//         int sz = 0;

        
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 arr[sz] = nums[i];
//                 sz++;
//             }
//         }

//         for (int i = 0; i < nums.size(); i++) {
//             nums[i] = arr[i];
//         }
    
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int> &nums) { 
        int nonzero=0;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[nonzero], nums[i]);
                nonzero++;
            }
        }
    
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 0, 3, 0, 12};
    vector<int> result = s.moveZeroes(nums);
    for (int i = 0; i < result.size(); i++)
    {
       cout << result[i] << " ";
    }
}