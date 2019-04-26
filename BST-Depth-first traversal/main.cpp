#include <iostream>

using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node* createNode(int value);
node* insertNode(node* root , int data);
void preOrderTraversal(node *root);
void inOrderTraversal(node *root);
void postOrderTraversal(node *root);
int main()
{
     node *root = NULL;
   root = insertNode(root , 5);
   root = insertNode(root , 10);
   root = insertNode(root , 4);
   root = insertNode(root , 2);
   root = insertNode(root , 3);
   root = insertNode(root , 11);

   preOrderTraversal(root);
   cout<<endl;
   inOrderTraversal(root);
      cout<<endl;

  postOrderTraversal(root);
     cout<<endl;

    return 0;
}
node* createNode(int value)
{
  node *newNode = new node;
  newNode->data = value;
  newNode->left = newNode->right = NULL;

  return newNode;
}
node* insertNode(node* root , int data)
{
    if(root == NULL)
       {
        root = createNode(data);
       }
    else
    {
        if(data <= root->data)
          root->left = insertNode(root->left , data);
        else if(data > root->data)
          root->right = insertNode(root->right , data);
    }
   return root;
}

void preOrderTraversal(node *root)
{
  if(root == NULL) //Defining the base case for the recursion
  {
      return;
  }
  else
  {
      cout<<root->data<<" ";
      preOrderTraversal(root->left);
      preOrderTraversal(root->right);
  }
}
void inOrderTraversal(node *root) // This type prints the subtree(after the root) elements in ascending order and we can make it in descending order
{                                  // by swapping the recursion call of left and right sides of the tree
 if(root == NULL)
      return;
  else
  {
      inOrderTraversal(root->left);
            cout<<root->data<<" ";
      inOrderTraversal(root->right);
  }
}
void postOrderTraversal(node *root)
{
      if(root == NULL)
  {
      return;
  }
  else
  {
      postOrderTraversal(root->left);
      postOrderTraversal(root->right);
            cout<<root->data<<" ";
  }
}







