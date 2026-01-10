#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarysearch(vector<int>& nums, int left, int right, int target) {
        if (left > right) {
            return left;  // insertion point
        }

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            return binarysearch(nums, left, mid - 1, target);
        }
        else {
            return binarysearch(nums, mid + 1, right, target);
        }
    }

    int searchInsert(vector<int>& nums, int target) {
        return binarysearch(nums, 0, nums.size() - 1, target);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    cout << "Insert position: " << sol.searchInsert(nums, target) << endl;
    return 0;
}
