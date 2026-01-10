#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(ans.empty()){
                    ans.push_back(i);
                    ans.push_back(i);
                }
               
                else{
                    ans[1]=i;
                }
            }
            
        }
        if(ans.empty()){
               return {-1,-1};
        }
        
        return ans;
    }
};
int main(){
    Solution q;
    vector<int>nums={1,4,4,4,3,5,5};
    int target=4;
     vector<int> result = q.searchRange(nums, target);
     cout << result[0] << " " << result[1];

    }
