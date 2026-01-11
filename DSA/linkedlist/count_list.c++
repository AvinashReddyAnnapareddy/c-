#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int data) {
    node* newnode = new node(data);

    if (head == NULL) {
        head = newnode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}
int count(node* &head,int target){
    int sum=0;
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==target){
            sum=sum+1;
        }
        temp=temp->next;
    }
    return sum;
}
void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    node* head = NULL;
    int target; 
    cin>>target;
    int nums[] = {2,5,3,3,7,8,8,8};
    int n = sizeof(nums)/sizeof(nums[0]);

    for (int i = 0; i < n; i++) {
        insert(head, nums[i]);
    }
  
   int answer= count(head,target);
   cout<<answer; 
   printLL(head);
    return 0;
}
