#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0;

        for (int left = 0; left < n; left++) {

            unordered_map<char, int> freq;

            for (int right = n - 1; right >= left; right--) {

                freq.clear();   
                bool valid = true;

                for (int k = left; k <= right; k++) {
                    freq[s[k]]++;
                    if (freq[s[k]] > 1) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    maxLen = max(maxLen, right - left + 1);
                }
            }
        }
        return maxLen;
    }

int main(){
    string s="abcabcbb";
    int result=lengthOfLongestSubstring(s);
    cout<<result;
}

