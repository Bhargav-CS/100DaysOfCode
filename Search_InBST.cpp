#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left,*right;
    Node(int val){
        data=val;
        left= NULL;
        right=NULL;
    }
};

Node* searchInBST(Node*root, int key){
    if(root==NULL){
        return NULL;
    }

    if (root -> data == key){
        return root;
    }
    if (root -> data > key){
        return searchInBST(root->left,key);
    }

    return searchInBST(root->right,key);
}

int main() {

    Node*root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);

    if(searchInBST(root, 5) == NULL){ 
        cout<<"Key does not exist";
    // if(searchInBST(root, 10) == NULL){  // this should print 'key does not exist'
    //     cout<<"Key does not exist";
    }else{
        cout<<"Key exists"; // this will execute since we have the key
    }

   return 0;
}