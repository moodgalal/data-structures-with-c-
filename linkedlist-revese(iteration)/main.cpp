#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

void insertNode();
void deleteNode(int n);
void reverseList();
void print();

node *head = NULL;
int main()
{
    int nodesNumber=0;
    cout<<"Enter the nodes number Please"<<endl;
    cin>>nodesNumber;
    for(int i=0; i<nodesNumber; i++)
        insertNode();
    print();

  reverseList();
  print();

    int deletePosition;
    cout<<"Enter the delete position"<<endl;
    cin>>deletePosition;
  deleteNode(deletePosition);
  print();

  insertNode();
  print();
}

void insertNode()
{

int data , position;
cout<<"Enter your node's data"<<endl;
cin>>data;
cout<<"Enter your node's position please"<<endl;
cin>>position;

 if(position == 1)
  {
      node *new_node = new node;
      new_node->data = data;
      new_node->link = head;
      head = new_node;
  }
  else
  {
    node *new_node = new node;
    new_node->data = data;

    node *temp = head;
    for(int i=1; i<position-1; i++)
    {
        temp=temp->link;
    }
    new_node->link = temp->link;
    temp->link = new_node;
  }

}

void reverseList()
{
 node *current = head;
 node *prev = NULL  , *next = NULL;
 while(current != NULL)
 {
  // We should traverse the list but the links also and set the pointers as not losing any data
  next = current->link;
  current->link = prev;
  prev = current;
  current = next;
 }
 head = prev;

}

void print()
{
  node *temp = head;
  cout<<"Your list is: ";
  while(temp != NULL)
  {
      cout<<temp->data<<" ";
      temp = temp->link;
  }
  cout<<endl;
}
void deleteNode(int n)
{
    node *temp1 = head;
    if(n == 1)
    {
      head = temp1->link;
      delete temp1;
    }
    else
    {
        for(int i=1; i<n-1; i++)
        {
            temp1 = temp1->link;
        }
        node *temp2 = temp1->link;
        temp1->link = temp2->link;
        delete temp2;
    }
}
