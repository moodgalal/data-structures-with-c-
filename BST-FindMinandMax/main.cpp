#include <iostream>

using namespace std;

struct node
{
    int data;
    node *right;
    node *left;
};

node* getNewNode(int x);
node* insertNode(node *root , int data);
int findMin(node *root);
int findMax(node *root);
int findMinRecursive(node *root);
int findMaxRecursive(node *root);
int main()
{
    node *root = NULL;

    return 0;
}

node* getNewNode(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->right = newNode->left = NULL;
    return newNode;
}
node* insertNode(node *root , int data)
{
    if(root == NULL)
      root = getNewNode(data);
    else if(root != NULL && data <= root->data)
        root->left = insertNode(root->left , data);
    else if(root != NULL && data > root->data)
        root->right = insertNode(root->right , data);

        return root;
}
int findMin(node *root)
{
    if(root == NULL)
    {
        cout<<"The tree is null"<<endl;
        return -1;
    }
    else
    {
        node *temp = root;
      while(temp->left != NULL)
        temp = temp->left;

      return temp->data;
    }
}
int findMax(node *root)
{
    if(root == NULL)
    {
        cout<<"The tree is null"<<endl;
        return -1;
    }
    else
    {
        node *temp = root;
      while(temp->right != NULL)
        temp = temp->right;
      return temp->data;
    }
}
int findMinRecursive(node *root)
{
    if(root == NULL)
    {
        cout<<"The tree is null"<<endl;
        return -1;
    }
    else if(root->left == NULL)
        return root->data;
    else
        return findMinRecursive(root->left);
}

int findMaxRecursive(node *root)
{
    if(root == NULL)
    {
        cout<<"The tree is empty"<<endl;
        return -1;
    }
    else if(root->right == NULL)
        return root->data;
    else
    {
        return findMaxRecursive(root->right);
    }
}





















