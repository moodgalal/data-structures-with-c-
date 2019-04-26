#include <iostream>
#define MAX_SIZE 101  // Defining a constant MAX_SIZE = 101
using namespace std;  /// Using stack with arrays

int arr[MAX_SIZE];
int top = -1;

void push(int x);
void pop();
int topElement();
void print();

int main()
{
    push(2); print();
    push(4); print();
    push(6); print();
    push(8); print();
    pop(); print();
    push(10); print();

    cout<<topElement()<<endl;
}

void push(int x)
{
    if(top == MAX_SIZE -1)
    {
      cout<<"Stack overFlow"<<endl;
      return;
    }
    arr[++top] = x;
}

void pop()
{
  if(top != -1)
        top--;
    else
        cout<<"Stack is empty"<<endl;
}

int topElement()
{
  return arr[top];
}

void print()
{
    cout<<"Stack is ";
    for(int i=top; i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
}















