#include<iostream>
#include<vector>
using namespace std; 
double findMedianCount(int a1[], int n1, int a2[], int n2){
    vector<int> merged;
    int i=0;
    int j=0;
    
   while(i<n1 && j<n2){
         if(a1[i]>a2[j]){
            merged.push_back(a2[j]);
            j++;
         }
         else{
            merged.push_back(a1[i]);
            i++;
         }
   }
   while(i<n1){
    merged.push_back(a1[i]);
    i++;
   }
    while(j<n2){
    merged.push_back(a2[j]);
    j++;
   }
     int n = merged.size();
     if (n % 2 == 1)
            return merged[n / 2];
        else
            return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;



}
int main(){
    int a1[]={1,2,3,8,9};
    int a2[]={0,4,10};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    double result=findMedianCount(a1,n1,a2,n2);
    cout<<result;
}