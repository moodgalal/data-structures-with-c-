#include <iostream>

using namespace std;
struct node // Making a a structure for the node
{
    int data ; // To store the data
    node *link ; // To store the address of the next node of the linked list
};

  void insertData(int data);
  void  print();

  // Making a global variable of the pointer that point to the head node to be readable of the functions
node *head=NULL;
int main()
{
    int number; // To store the number of nodes
    int data;  // To store the data of each node

    cout<<"Enter the number of nodes"<<endl;
    cin>>number;

    for(int i=0; i<number; i++)
    {
        cout<<endl<<"Enter the "<<i+1<<"th node data";
        cin>>data;
        insertData(data);
        print();
    }
}

void insertData(int data)
    {
        node *temp = new node; //If we want to insert a data we have to make a new node
        temp->data = data;     //filling the structure data with data passed from the user
        temp->link = head;     // Assign the address of the head node and it will be null if the list is empty
        head = temp;           // Then make the head pointer points to the new node
    }

    void print() // Initializing the print function
        {
            node *temp = head; // Making a copy of the head pointer in order to not changing the value of the actual list
            cout<<"The list is: ";
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->link; // Assign the address of the next node to temporary head pointer
            }
        }






