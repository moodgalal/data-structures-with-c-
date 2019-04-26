#include <iostream>
#include<limits>
using namespace std;
 int INT_MAX = numeric_limits<int>::max(); // Defining integer has th biggest integer value
 int INT_MIN = numeric_limits<int>::min();   // Defining integer has th least integer value
struct node
{
    int data;
    node *left;
    node *right;
};
node* createNode(int value);
node* insertNode(node* root , int data);
bool isBSTUtil(node *root , int , int);
bool isBST(node*);
int main()
{
         node *root = NULL;
   root = insertNode(root , 5);
   root = insertNode(root , 10);
   root = insertNode(root , 4);
   root = insertNode(root , 2);
   root = insertNode(root , 3);
   root = insertNode(root , 11);

if(isBST(root))
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
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

bool isBSTUtil(node *root , int minRange, int maxRange)
{
    if(root == NULL) // Defining the base case
        return true;
    else if(root->data <= maxRange
            && root->data > minRange
            && isBSTUtil(root->left ,minRange, root->data) // Set the upper pound to the left side as the value of root node
            &&isBSTUtil(root->right , root->data , maxRange)) // Set the lower pound to the left side as the value of root node
            return true;

            else
                return false;

}
bool isBST(node *root)
{
    return isBSTUtil(root , INT_MIN , INT_MAX);
}





