#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left;
    node* right;
};
node* getNewNode(int data);
node* insertTreeNodes(node *root , int data);
void breadthFirst(node *root);
int main()
{
    node *root = NULL;
    root = insertTreeNodes(root , 1);
    root = insertTreeNodes(root , 22);
    root = insertTreeNodes(root , 7);
    root = insertTreeNodes(root , 11);
    root = insertTreeNodes(root , 8);
    root = insertTreeNodes(root , 9);
    root = insertTreeNodes(root , 18);
    root = insertTreeNodes(root , 32);
    root = insertTreeNodes(root , 24);
    root = insertTreeNodes(root , 5);
    root = insertTreeNodes(root , 10);
    root = insertTreeNodes(root , 15);
    root = insertTreeNodes(root , 14);
    root = insertTreeNodes(root , 15);
    root = insertTreeNodes(root , 4);

breadthFirst(root);
    return 0;
}
// End of main function
// Start the node creator method
node* getNewNode(int data)
{
  node *newNode = new node;
  newNode->data = data;
  newNode->left = newNode->right = NULL;

  return newNode;
}
// End the node creator method

// Start the node inserter method
node* insertTreeNodes(node *root ,int data)
{
  if(root == NULL)
      root = getNewNode(data);
  else if(root!= NULL && data<= root->data)
      root->left = insertTreeNodes(root->left , data);
    else if(root != NULL && data > root->data)
      root->right = insertTreeNodes(root->right , data);

  return root;
}
// End the inserter method

// Start the printing method
void breadthFirst(node *root)
{
    if(root == NULL)
        return;

    else{
  queue<node*>myQueue;
  myQueue.push(root);

  while(!myQueue.empty())
  {
    node *current = myQueue.front();
    cout<<current->data<<endl;
    if(current->left != NULL)
        myQueue.push(current->left);
    if(current->right != NULL)
        myQueue.push(current->right);

        myQueue.pop();
  }
}

}
// End the print method







