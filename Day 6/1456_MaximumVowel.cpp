#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        string vowel="aeiouAEIOU";
        
        for (int i=0; i<k; i++) {
            if (vowel.find(s[i]) != string::npos) {
                count++;
            }
        }

        int mx=count;

        for (int j=k; j<s.size(); j++) {
            if (vowel.find(s[j]) != string:: npos)
                count++;
            if (vowel.find(s[j-k]) != string:: npos)
                count--;

            mx= max(mx, count);
            
        }

        return mx;
    }
};


int main()
{
    Solution sol;
    string s = "leetcode"; //aacdef
    int k=3;
    int result = sol.maxVowels(s,k);
    cout << result;
}