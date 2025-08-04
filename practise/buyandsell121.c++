#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    // int n = prices.size();
    // int maxProfit = 0;

    // for(int i = 0; i < n - 1; ++i) {
    //     for(int j = i + 1; j < n; ++j) {
    //         int profit = prices[j] - prices[i];
    //         if(profit > maxProfit) {
    //             maxProfit = profit;
    //         }
    //     }
    // }

    // return maxProfit;
    int left=0;
    int right=1;
    int maxprofit=0;
    while(right<prices.size()){
         if (prices[right] > prices[left]) {
            int profit = prices[right] - prices[left];
            maxprofit = max(maxprofit, profit);
        } else {
            left = right;
        }
        right++;
    }
    return maxprofit;
    }


int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Max Profit (Brute Force): " << maxProfit(prices) << endl;
    return 0;
}
