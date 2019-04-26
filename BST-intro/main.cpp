#include <iostream>

using namespace std;

struct BSTnode // Creating the structure for the nodes of binary tree
{
    int data;
    BSTnode *right;
    BSTnode *left;
};
BSTnode* getNewNode(int x); // Function that creates and returns a new node
BSTnode* nodeInsert(BSTnode *root , int data); // Function that insert the node in the tree
bool isHere (BSTnode *root , int data); // Function that search the tree for a certain element

int main()
{
  BSTnode *root = NULL;
  root = nodeInsert(root , 5);
  root = nodeInsert(root , 10);
  root = nodeInsert(root , 4);
  root = nodeInsert(root , 2);
  root = nodeInsert(root , 3);
  root = nodeInsert(root , 11);

  if(isHere(root , 11))
    cout<<"Found"<<endl;
  else
    cout<<"There is no such element"<<endl;
    return 0;
}

BSTnode* getNewNode(int x)
{
    BSTnode *newNode = new BSTnode; // Creating a node in the heap using the new operator and make the pointer points to it
    newNode->data = x;
    newNode ->left = newNode->right = NULL;
    return newNode; // Return the address of the new node (the pointer)
}

BSTnode* nodeInsert(BSTnode *root , int data)
{
  if(root == NULL)
      root = getNewNode(data);
  else if(root != NULL && data <= root->data)
    root->left = nodeInsert(root->left , data); // Making a recursive call to traverse the left side of the tree to insert the element
  else if(root != NULL && data > root->data)
    root->right = nodeInsert(root->right , data);  // Making a recursive call to traverse the right side of the tree to insert the element

  return root;
}
bool isHere (BSTnode *root , int data)
{
    if(root == NULL)
    {
        cout<< "The tree is empty..."<<endl;
        return false;
    }
    else if(root->data == data)
       return true;
  else if(root != NULL && data < root->data)  /// Recursion is frequently used in trees
     return isHere(root->left , data);
  else if(root != NULL && data > root->data)
     return isHere(root->right , data);
}
