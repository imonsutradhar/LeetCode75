#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> arr;
        int area;
        int left=0;
        int right=height.size()-1;

        while(left < right) {
            area=(right-left) * min(height[left], height[right]);
            arr.push_back(area);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        int mx = *max_element(arr.begin(), arr.end());
        return mx;
    }
};

int main() {
    Solution s;
    vector<int> height= {1,1};
    int result=s.maxArea(height);
    cout<<result;
}