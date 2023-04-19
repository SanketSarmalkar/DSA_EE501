/*
Name: Sanket S.Sarmalkar 20EEE1028
Date: 05/04/2021
Description: To Contruct a Binary Search Tree.
*/
#include<bits/stdc++.h>
using namespace std;
struct BinarySearchTreeNode{
    int data;
    BinarySearchTreeNode *left;
    BinarySearchTreeNode *right;
};
void insertNode(BinarySearchTreeNode *&root, int data){
    if(root == NULL){
        root = new BinarySearchTreeNode;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if(data <= root->data){
        insertNode(root->left, data);
    }
    else{
        insertNode(root->right, data);
    }
}
void display(BinarySearchTreeNode *root){
    queue<BinarySearchTreeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        BinarySearchTreeNode *temp = q.front();
        q.pop();
        if (temp == NULL){
            cout << "\n";
            if (!q.empty()) // queue still have some child node
                q.push(NULL);
        }else{
            cout << temp->data << " ";
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    BinarySearchTreeNode *root = new BinarySearchTreeNode();
    root->data = 10;
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 12);
    insertNode(root, 17);
    insertNode(root, 1);
    insertNode(root, 4);
    display(root);
}