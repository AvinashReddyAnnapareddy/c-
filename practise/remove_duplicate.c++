#include <iostream>
#include <unordered_map>
using namespace std;

struct node {
    int val;
    node* next;

    node(int v) {
        val = v;
        next = nullptr;
    }
};


node* deleteDuplicates(node* head) {
    if (head == nullptr) return nullptr;

    unordered_map<int, int> freq;
    node* temp = head;
    while (temp != nullptr) {
        freq[temp->val]++;
        temp = temp->next;
    }

    
    node dummy(0);
    dummy.next = head;
    node* prev = &dummy;
    node* curr = head;
    while (curr != nullptr) {
        if (freq[curr->val] > 1) {
           
            prev->next = curr->next;
        } else {
            prev = curr;
        }
        curr = curr->next;
    }

    return dummy.next;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0) {
        cout << "Linked list is empty";
        return 0;
    }

    int x;
    cout << "Enter value 1: ";
    cin >> x;

    node* head = new node(x);
    node* tail = head;

    for (int i = 2; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> x;
        tail->next = new node(x);
        tail = tail->next;
    }

    cout << "\nOriginal List: ";
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
     
    head = deleteDuplicates(head);

    cout << "\nAfter Removing Duplicates: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
