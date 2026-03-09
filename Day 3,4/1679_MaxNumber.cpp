#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int left=0;
        int right=nums.size()-1;
        sort(nums.begin(), nums.end());

        while(left <right) {
            if (nums[left]+nums[right]==k) {
                left++;
                right--;
                count++;
            }
            else if (nums[left]+nums[right]<k) {
                left++;
            }
            else 
                right--;
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> nums={3,1,3,4,3};//1 3 3 3 4    6
    int k=6;
    int result=s.maxOperations(nums, k);
    cout<<result;
}