#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string s){
    string z = "";
    for(char c : s){
        if(isalpha(c) || isdigit(c)){
            z += tolower(c);
        }
    }
    int left = 0;
    int right = z.length() - 1;
    while(left < right){
        if(z[left] != z[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    cout << "enter the string->";
    getline(cin, s);
    if(isPalindrome(s)){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
}