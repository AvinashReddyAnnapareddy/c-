#include <iostream>
#include <vector>
using namespace std;


    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        
        for (int i = n - 1; i >= 0; i--) {
            digits[i]++;            
            if (digits[i] < 10) {   
                return digits;
            }
            digits[i] = 0;          
        }

        digits.insert(digits.begin(), 1);
        return digits;
        // // If all digits were 9 (like 999 -> 1000)
        // vector<int> result(n + 1, 0); // new vector of size n+1
        // result[0] = 1;                // put 1 at the front
        // return result;
    }


// Driver code for testing
int main() {
  

    vector<int> digits1 = {1, 2, 3};
    vector<int> ans1 = plusOne(digits1);
    for (int d : ans1) cout << d << " ";   // 1 2 4
    cout << endl;

    vector<int> digits2 = {9, 9, 9};
    vector<int> ans2 = plusOne(digits2);
    for (int d : ans2) cout << d << " ";   // 1 0 0 0
    cout << endl;

    vector<int> digits3 = {4, 9, 9};
    vector<int> ans3 = plusOne(digits3);
    for (int d : ans3) cout << d << " ";   // 5 0 0
    cout << endl;

    return 0;
}

