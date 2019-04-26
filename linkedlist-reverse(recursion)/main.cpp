#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};
node* insertNode(node *head , int data);
void reversedPrint (node *head);
void reverseElements(node *head);
void reversedPrint ();

node *globalHead = NULL;
int main()
{
  node *head = NULL;
        head = insertNode (head , 5);
        head = insertNode (head , 2);
        head = insertNode (head , 3);
        head = insertNode (head , 1);
        head = insertNode (head , 4);

        reversedPrint(head);
        reverseElements(head);
        reversedPrint();
}

node* insertNode(node *head , int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->link = NULL;

    if(head==NULL)
        head = newNode;
    else
    {
        node *temp = head;   ///That approach will store the data in the linked list just like the array

        while(temp->link != NULL)
            temp=temp->link;

        temp->link = newNode;
    }
    return head;
}

void reversedPrint (node *head)
{
    if(head == NULL)
    {  cout<<"The list is empty"<<endl;             // Base case of recursion that terminates the recursion
        return;
    }
    else
    {
     reversedPrint(head->link); // If we swap these two lines of code we will get the the normal print flow but if we want this
          cout<<head->data;     // we should use iterative approach as it does not consumes huge memory.
    }

}

void reverseElements(node *head)
{
  if(head->link == NULL)
    {
       globalHead = head;
      return;
    }
  else
  {
    reverseElements(head->link);
    node *q = head->link;
    q->link = head;
    head->link = NULL;
  }
}
void reversedPrint ()
{
    if(globalHead == NULL)
    {  cout<<endl;             // Base case of recursion that terminates the recursion
        return;
    }
    else
    {
     reversedPrint(globalHead->link); // If we swap these two lines of code we will get the the normal print flow but if we want this
          cout<<globalHead->data;     // we should use iterative approach as it does not consumes huge memory.
    }

}








