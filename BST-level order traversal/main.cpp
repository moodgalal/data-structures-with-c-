#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
node* createNode(int value);
node* insertNode(node* root , int data);
void levelOrderTraversal(node *root);
int main()
{
  node *root = NULL;
   root = insertNode(root , 5);
   root = insertNode(root , 10);
   root = insertNode(root , 4);
   root = insertNode(root , 2);
   root = insertNode(root , 3);
   root = insertNode(root , 11);

   levelOrderTraversal(root);
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
void levelOrderTraversal(node *root)
{
    if(root == NULL)
    {
        cout<<"The tree is empty"<<endl;
        return;
    }
    else
    {
        queue<node*> myQ; // queue for the addresses of the nodes
        myQ.push(root);

        while(!myQ.empty()) // A loop to traverse all the nodes in level order
        {
           node *current = myQ.front();
            cout<<current->data<<endl;
            if(current->left != NULL)
                myQ.push(current->left);
            if(current->right != NULL)
                myQ.push(current->right);
            myQ.pop();
        }
    }
}
















