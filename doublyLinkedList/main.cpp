#include <iostream>

using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};

node* getNewNode(int x);
void insertAtHead(int x);
void inserAtTail(int x);
void print();
void reversePrint();

node *head ;

int main()
{
  head = NULL;
  insertAtHead(2); print();
  insertAtHead(4); print();
  insertAtHead(6); print();

    inserAtTail(1); print();
    reversePrint();
}

node* getNewNode(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void insertAtHead(int x)
{
  node *newNode = getNewNode(x);
  if(head == NULL)
  {
      head = newNode;
      return;
  }
  else
  {
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
  }
}

void inserAtTail(int x)
{
  node *newNode = getNewNode(x);
  node *temp = head;
  while(temp->next != NULL)
        temp = temp->next;

  newNode->prev = temp;
  temp->next = newNode;

}

void print()
{
    node *temp = head;
    cout<<"Forward:";
    while(temp != NULL){
        cout<<temp->data;
    temp = temp->next;
    }
    cout<<endl;
    delete temp;
}

void reversePrint()
{
        node *temp = head;
        if(temp == NULL)
            return;
        while(temp->next != NULL)
            temp = temp->next;
    cout<<"Reversed:";
    while(temp != NULL)
    {
        cout<<temp->data;
    temp = temp->prev;
    }
    cout<<endl;
    delete temp;
}









