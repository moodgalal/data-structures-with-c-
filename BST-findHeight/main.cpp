#include <iostream>

using namespace std;

struct node
{
    int data;
    node *right;
    node *left;
};
int findHeight(node *root);
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

int findHeight(node *root)
{
    if(root == NULL)
        return -1;
    else
        return max(findHeight(root->left) , findHeight(root->right))+1;
}
