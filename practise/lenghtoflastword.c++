#include<iostream>
#include<string.h>
using namespace std;
int largestlenght(string s){
     int len=s.length()-1;
     int count=0;
     while(s[len]==' '&&len>0){
        len--;
     }
     while(len>=0 && s[len]!=' ' ){
           len--;
           count++;
     }
     return count;
}
int main(){
    string z;
    getline(cin, z);
    int output=largestlenght(z);
    cout<<output;
}