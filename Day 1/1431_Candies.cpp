#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;
        int mx = *max_element(candies.begin(), candies.end());

        for (int i=0; i<candies.size(); i++) {
            if (candies[i]+ extraCandies >= mx)
                ans.push_back(true);
            else
                ans.push_back(false);
        }

        return ans;
        
    }
};

int main() {
    Solution s;
    vector<int> candies={4,2,1,1,2};
    int extraCandies=1;
    vector<bool> result=s.kidsWithCandies(candies, extraCandies);
    for (int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }
}