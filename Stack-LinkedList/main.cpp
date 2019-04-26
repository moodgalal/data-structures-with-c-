#include <iostream>

using namespace std;

struct node
{
    int data;
    node* link;
};
node *top = NULL;

void push(int x);
void pop();
void print();

int main()
{
  push(1); print();
  push(2); print();
  push(3); print();
  push(4); print();
  push(5); print();
  pop(); print();
}

void push(int x)
{
  node *newNode = new node;
  newNode->data = x;
  newNode->link  = top;
  top = newNode;
}
void pop()
{
    node *temp;
    if(top == NULL)
    {
        cout<<"The stack is empty"<<endl;
        return;
    }
    temp = top;
    top = top->link;
    delete temp;
}
void print()
{
    node *temp = top;
    cout<<"The stack is ";
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}



















