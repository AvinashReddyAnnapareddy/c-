#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& arr){
    int j=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}
int main(){
   vector<int> arr = {2,4,4,55,55,5,6,6,7,7};

   int res= removeDuplicates(arr);
   cout<<res;
}