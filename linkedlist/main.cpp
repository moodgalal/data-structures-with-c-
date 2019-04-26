#include <iostream>

using namespace std;

struct node //Making the structure to represent the node of the linked list
{
    int data; // It represent the data in the linked list
    node *link; // It will represent the pointer that points to every other node
};

int main()
{
    node *head = NULL; // Making a pointer to point to the head node (now the linked list is empty)

    node *temp = new node; // Making a new node
    temp->data = 2; // Set the data to a value
    (*temp).link = NULL; // In order to have only one node so we set the pointer to null value

    head = temp; // Set the head pointer to the temporary pointer.

    // Inserting a node at the beginning of the linked list.
}
