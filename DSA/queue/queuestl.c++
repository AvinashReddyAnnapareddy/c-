#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// class node{
//     public:
//         int data;
//         node* next;

//        node(int val){
//         data=val;
//         next=NULL;
//        } 
// };
// class queue{
//     node* head;
//     node* tail;
// public:
//     queue(){
//         head=tail=NULL;
//     }
//     void push(int data){
//         node *newnode=new node(data);
//         if(isempty()){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     void pop(){
//        if(isempty()){
//            cout<<"linked list is empty";
//         }
//         else{
//             head=head->next;
//         }
//     }
//     int front(){
//         return head->data;
//     }
//     bool isempty(){
//         return head==NULL;
//     }
// };
// implementation through stl
int main(){
   //queue q;
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   while(!q.empty()){
       cout<<q.front()<<"";
       q.pop();
   }
     return 0;
     
}