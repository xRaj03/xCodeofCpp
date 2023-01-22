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

// Inorder fuction to traverse and print the elements of the tree

void inorderTraversal(Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout<<(root->key)<<" ";
        inorderTraversal(root->right);
    }
}

// Postorder fuction to traverse and print the elements of the tree

void postorderTraversal(Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<(root->key)<<" ";

    }
}

// Funtion to find the hight of the binary tree

int height(Node *root)
{
    if(root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right))+1;
}

void printKDistance(Node *root, int k)
{
    if(root == NULL)
    {
        return ;

    }
    if(k == 0)
    {
        cout<<(root->key)<<" ";

    }
    else{
        printKDistance(root->left, k-1);
        printKDistance(root->right, k-1);
    }
}

int main(){

    Node*root = new Node(10);
    root->left = new Node (20);
    root->right = new Node (30);
    root->right->left=new Node(40);
    root->right->right = new Node(50);

    cout<<printKDistance(root , 3);

    return 0;
}