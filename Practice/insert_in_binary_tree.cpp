#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};


Node *insertBST(Node *root, int value)
{

    if (root == NULL)
    {
        return new Node(value);
    }

    if (value < root->data)
    {
        root->left = insertBST(root->left, value);
    }
    else
        root->right = insertBST(root->right, value);

    return root;
}



void inorder(Node *root){

    if (root == NULL){
        return ;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

Node* search(Node* root , int key){

    if(root == NULL){
        return NULL;
    }

    if(root->data == key ){
        return root;
    }

    if(key<root->data){
        return search(root->left, key);
    } else 
        return search(root->right, key);

    

}

int main()
{
    Node* root = NULL;
    root = insertBST(root, 1);
    insertBST(root, 2);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 5);
    insertBST(root, 6);

    inorder(root); 

    return 0;


}