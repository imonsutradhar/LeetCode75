#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> prefix(gain.size() + 1);
        prefix[0] = 0;

        for (int i = 1; i <= gain.size(); i++)
        {
            prefix[i] = prefix[i - 1] + gain[i - 1];
        }

        int mx = *max_element(prefix.begin(), prefix.end());

        return mx;
    }
};

int main()
{
    Solution s;
    vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
    int result = s.largestAltitude(gain);
    cout << result;
}