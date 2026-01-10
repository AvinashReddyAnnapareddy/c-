#include <iostream>
#include <vector>
using namespace std;


   struct node {
        int data;
        node* left;
        node* right;

        node(int val) {
            data = val;
            left = right = nullptr;
        }
    };

    node* buildBST(node* root, int val) {
        if (root == nullptr)
            return new node(val);

        if (val < root->data)
            root->left = buildBST(root->left, val);
        else
            root->right = buildBST(root->right, val);

        return root;
    }

    node* buildBSTfromArray(const vector<int>& arr) {
        node* root = nullptr;
        for (int x : arr) {         
            root = buildBST(root, x); 
        }
        return root;
    }

int main() {

    vector<int> arr = {3,4,5,7,8};
    node* root = buildBSTfromArray(arr);
}
