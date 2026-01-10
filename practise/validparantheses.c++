#include<iostream>
#include<stack>
#include<string>
using namespace std;

// Function prototype
bool isValid(string s);

bool isValid(string s){
      stack<char> brackets;
      for(char c:s){
       
        if(c=='{'||c=='['||c=='('){
           brackets.push(c);
        }
        else{
            if(brackets.empty()) return false;
            
            if((c == ')' && brackets.top() != '(') ||
               (c == '}' && brackets.top()!= '{') ||
               (c == ']' && brackets.top() != '[')) {
                return false;
            }
         brackets.pop();
    }
}
return brackets.empty();
}

int main() {
  
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    if (isValid(input)){
        cout << "Valid\n";
    }
    else{
        cout << "Invalid\n";
    }
    return 0;
}
