#include<bits/stdc++.h>

using namespace std;

// This block defines the structure of the tree  
struct Node
{
    int key;
    Node*left;
    Node*right;
    
    // Constructor used to create an empty node with the pointer pointing at nothing

    Node(int k)
    {
        key=k;
        left=right=NULL;

    }
};

// Preorder fuction to traverse and print the elements of the tree

void preorderTraversal (Node *root)
{
    if(root != NULL)
    {
        cout<<(root->key)<<" ";
        preorderTraversal(root->left);
        cout<<endl;
        preorderTraversal(root->right);
    }
}


int main(){

    Node*root = new Node(10);
    root->left = new Node (20);
    root->right = new Node (30);
    root->left->left=new Node(40);

    preorderTraversal( root);  

    return 0;
}