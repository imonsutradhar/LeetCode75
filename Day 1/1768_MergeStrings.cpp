#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int mx=max(word1.length(), word2.length());


      for (int i=0 ; i<mx; i++) {
        if (i < word1.length())
            merge.push_back(word1[i]);

        if (i < word2.length())
            merge.push_back(word2[i]);

      }
      return merge;
    }
};

int main() {

    Solution s;
    string word1="ab";
    string word2="pqrs";

    string result=s.mergeAlternately(word1, word2);
    cout<<result;

}