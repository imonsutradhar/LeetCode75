#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ') {
                
                string temp="";
                int j=i;
                
                while (j<s.size() &&  s[j] != ' ') {
                    temp+=s[j];
                    j++;
                }
                words.push_back(temp);
                i=j;
            }
        }

        string res="";
        for (int k=words.size()-1; k>=0; k--) {
            res+=words[k];

            if (k!=0)
                res+=' ';
        }
        return res;
    }

};

int main()
{
    Solution sol;
    string s = "the sky is blue";
    string result = sol.reverseWords(s);
    cout << result <<endl;
}
