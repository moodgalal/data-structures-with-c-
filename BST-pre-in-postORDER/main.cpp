#include <iostream>

using namespace std;

struct node
{
    char data;
    node *left;
    node* right;
};
node* getNewNode(char data);
node* insertNewNode(node* root , char data);
void preOrderTraversal(node *root);
void inOrderTraversal(node *root);
void postOrderTraversal(node *root);
int main()
{
    node *root = NULL;
    root = insertNewNode(root , 'a');
    root = insertNewNode(root , 'b');
    root = insertNewNode(root , 'c');
    root = insertNewNode(root , 'd');
    root = insertNewNode(root , 'g');
    root = insertNewNode(root , 'o');
    root = insertNewNode(root , 'w');
    root = insertNewNode(root , 'z');
    root = insertNewNode(root , 'i');
    root = insertNewNode(root , 's');
    root = insertNewNode(root , 'f');

    preOrderTraversal(root);
    cout<<endl;
    inOrderTraversal(root);
        cout<<endl;
    postOrderTraversal(root);
    return 0;
}

node* getNewNode(char data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;

    return newNode;
}
node* insertNewNode(node* root , char data)
{
    if(root == NULL)
       root = getNewNode(data);
    else if(root != NULL && data<= root->data)
        root->left = insertNewNode(root->left , data);
    else if(root != NULL && data > root->data)
        root->right = insertNewNode(root->right , data);

        return root;
}
void preOrderTraversal(node *root)
{
    if(root == NULL)
        return;
    cout<<root->data;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(node *root)
{
        if(root == NULL)
        return;
    preOrderTraversal(root->left);
    cout<<root->data;
    preOrderTraversal(root->right);
}
void postOrderTraversal(node *root)
{
        if(root == NULL)
        return;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout<<root->data;
}




