#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//16ms
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> freq;  // hash table: node → frequency

        ListNode* current = head;
        while (current != nullptr) {
            freq[current]++;   // increment frequency for this node

            if (freq[current] == 2) {
                return true;   // if visited twice → cycle exists
            }

            current = current->next;  // move to next node
        }

        return false;  // reached null → no cycle
    }

};
    //0ms
//     class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *slow = head;
//         ListNode *fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) {
//                 return true; // Cycle detected
//             }
//         }
//         return false; // No cycle
//     }
// };
// Example usage
int main() {
    // Create nodes
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(0);
    ListNode* n4 = new ListNode(-4);

    // Link nodes to form a cycle: 3 -> 2 -> 0 -> -4 -> back to 2
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;  // cycle here

    Solution sol;
    if (sol.hasCycle(n1)) {
        cout << "Cycle detected\n";
    } else {
        cout << "No cycle\n";
    }

    return 0;
}
