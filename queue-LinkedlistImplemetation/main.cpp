#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};
void enqueue(int x);
void dequeue();
void print();

node *front(NULL) , *rear(NULL);

int main()
{
    enqueue(5); print();
    enqueue(4); print();
    enqueue(3); print();
    enqueue(2); print();
    enqueue(1); print();

    dequeue(); print();
    return 0;
}
void enqueue(int x)
{
  node *newNode = new node;
  newNode->data = x;
  newNode ->link = NULL;

  if(front==NULL && rear==NULL)
      front = rear = newNode;

  else
  {
      rear->link = newNode; // We make that in order to make the insertion in the rear of the linked list (we can use front->link to input in the front of the list)
      rear = newNode;
  }
}

void dequeue()
{
   node *temp = front;
    if(front==NULL)
        cout<<"There nothing to delete"<<endl;
    else if(front==rear)
        front = rear = NULL;
    else
            front = front ->link;

    delete temp;
}
void print()
{
  node *temp = front;
  if(front ==NULL)
        cout<<"There nothing to print"<<endl;
  else
  {
    cout<<"The queue is: ";
    while(temp != NULL)
      {
        cout<<temp->data;
        temp = temp->link;
      }
      cout<<endl;
   }
}
