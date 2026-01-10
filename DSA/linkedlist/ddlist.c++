class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
        vector<vector<int>> ans;
        if (!head) return ans;

        ListNode* left = head;
        ListNode* right = head;

        while (right->next) right = right->next;

        while (left && right && left != right && left->prev != right) {
            int sum = left->val + right->val;

            if (sum == target) {
                ans.push_back({left->val, right->val});
                left = left->next;
                right = right->prev;
            }
            else if (sum < target) {
                left = left->next;
            }
            else {
                right = right->prev;
            }
        }
        return ans;
    }
};
