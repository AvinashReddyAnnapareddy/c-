#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* createLinkedList(int n) {
    if (n == 0) return nullptr;

    int x;
    cout << "Enter value for node 1: ";
    cin >> x;

    ListNode* head = new ListNode(x);
    ListNode* temp = head;

    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> x;
        temp->next = new ListNode(x);
        temp = temp->next;
    }

    return head;
}
bool validpalindrome(ListNode *head){
        if (head==NULL || head->next==NULL){
            return true;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }

        ListNode *curr=slow;
        ListNode *prev=nullptr;
        while(curr){
           ListNode *nextnode=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nextnode;
        }
        ListNode *left=head;
        ListNode *right=prev;
        while(right!=NULL){
           if(left->val!=right->val){
             return false;
           }
           left=left->next;
           right=right->next;
        }
        return true;
}



int main() {
    int n;
    cout << "Enter length of linked list: ";
    cin >> n;

    ListNode* head = createLinkedList(n);

    cout << "Your Linked List: ";
    printList(head);

    return 0;
}
