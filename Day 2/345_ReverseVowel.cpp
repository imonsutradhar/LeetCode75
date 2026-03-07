#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int left = 0;
        int right = s.length() - 1;
        string vowel = "aeiouAEIOU";

        while (left < right)
        {
            while (left < right && vowel.find(s[left]) == string::npos)
            {
                left++;
            }
            while (left < right && vowel.find(s[right]) == string::npos)
            {
                right--;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};

int main()
{
    Solution sol;
    string s = "IceCreAm";
    string result = sol.reverseVowels(s);
    cout << result;
}