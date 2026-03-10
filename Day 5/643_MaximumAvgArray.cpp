#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;

        for (int i=0; i<k; i++) {
            sum+=nums[i];
        }
        int mx=sum;

        for (int j=k; j<nums.size(); j++) {
            sum= sum+ nums[j]-nums[j-k];

            mx=max(mx,sum);
        }
        cout<<mx<<endl;
        double avg=(double)mx/k;
        return avg;
        
    }
};

int main() {
    Solution s;
    vector<int> nums= {5,6,7};
    int k=5;
    double result=s.findMaxAverage(nums, k);
    cout<<result;
}
