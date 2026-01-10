#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums){
//brute 

bool swapped=true;
while(swapped){
int left=0;
int right=1;
int n=nums.size();
while(right<n){
         if (nums[left] > nums[right]) {
                    swap(nums[left], nums[right]);
                    swapped = true;
                }
                left++;
                right++;t
} 
}
//dutch flag method

}
int main(){
       vector <int> nums={2,0,1,1,0,2}
       sortColors(nums);
       for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"";
       }
}