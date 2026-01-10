#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=nums.size();
        for(int i=0;i<right;i++){
            if(nums[i]>0){
                swap(nums[left],nums[i]);
                left++;
            }
                  
        }
        
    }
int main(){
   vector<int> nums = {7,0,2,1,0,1};
   moveZeroes(nums);
   for(int i:nums){
    cout<<i<<" ";
   }
}