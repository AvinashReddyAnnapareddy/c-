#include<iostream>
#include<vector>
using namespace std;
int lengthOfLongestSubstring(string s){
        int n = s.length();
        int maxLen = 0;
          int r=0;
          int l=0;
          vector<int> hash(256,-1);
          for(int i=0;i<n;i++){
            if(hash[s[i]]!=-1){
                   l=max(l,hash[s[i]]+1);//should not move out of the window updated l should be more then present
            }
            hash[s[i]]=r;
             maxLen=max(maxLen,r-l+1);
            r++;
          }
          return maxLen;
    }
int main(){
    string s;
    cin>> s;
    int res=lengthOfLongestSubstring(s);
    cout<<res;
    return 0;
}