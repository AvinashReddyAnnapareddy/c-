#include<iostream>
#include<vector>
using namespace std;


    int minDeletionSize(vector<string> strs) {
        int rows = strs.size();
        int cols = strs[0].size();
        int count = 0;
        
        for (int col = 0; col < cols; col++) {
            for (int row = 1; row < rows; row++) {
                if (strs[row][col] < strs[row - 1][col]) {
                    count++;        
                    break;
                }
            }
        }
        return count;
    }


int main(){
    vector<string> strs={"a","b"};

    int result=minDeletionSize(strs);
    cout<<result;
}