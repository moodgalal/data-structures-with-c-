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
node* deleteNode(node *root , int data);
node* findMin(node *root);
int main()
{

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

node* deleteNode(node *root , int data)
{
  if(root==NULL)
  {
    return root;
  }
  else
  {
    if(data > root->data)
        root->right = deleteNode(root->right , data);
    else if(data < root->data)
        root->left = deleteNode(root->left , data);
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
          delete root;
          root = NULL;
        }
        else if(root->left == NULL)
        {
            node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            node *temp = root;
            root = root ->left;
            delete temp;
        }
        else
        {
            node *temp = findMin(root->right);
            root->data = temp->data;
            root = deleteNode(root->right , temp->data);
        }
    }
    return root;
  }
}
node* findMin(node *root)
{
    if(root==NULL)
        return root;
    else
    {
      node *temp = root;
      while(temp != NULL)
        temp = temp->left;
      return temp;
    }
}













