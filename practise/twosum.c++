#include<iostream>
#include<vector>
using namespace std;
void sumtarget(vector<int>&v,int target){
   int left =0;
   int right=v.size()-1;
    while(left<right){
    int sum=v[left]+v[right];
    if(sum==target){
        cout<<v[left]<<""<<v[right];
        left++;
        right--;
    }
    else if(sum>target){
        right--;
    }
    else{
        left++;
    }
   }
    
}
int main(){
    int n,target;
    cout<<"enter size of array->";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"enter target";
    cin>>target;
    sumtarget(v,target);

}