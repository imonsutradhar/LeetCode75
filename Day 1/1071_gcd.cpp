#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        string check =str1 +str2;
        string g;

        if (check != (str2+ str1)) {
            return {};
        }

        else {
            int n= gcd(str1.length(), str2.length());

            for (int i=0; i<n; i++) {
                g.push_back(check[i]);
            }
        }
        return g;
        
    }
};

int main() {

    Solution s;
    string word1="AA";
    string word2="AAA";

    string result=s.gcdOfStrings(word1, word2);
    cout<<result;

}