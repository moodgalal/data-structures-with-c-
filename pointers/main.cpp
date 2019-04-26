#include <iostream>
#include <string>

using namespace std;

void passingByReference(int *x);
void passingByValue(int x);

int main()
{
  int fish = 5; // That is simply a variable that holds a value
  cout<<fish<<endl; // Print 5
  cout<<&fish<<endl;  // Print the memory address that holds the value 5

   int *fishpointer = &fish; // We can't assign the value of the variable to it instead we should assign the address value of the variable using the memory address operator
  cout << fishpointer<<endl; // Print the memory address that holds the value of the variable fish
  cout << *fishpointer<<endl; // It print the value that the pointer refers to not the address

   *fishpointer = 8 ; // Changing the value of the variable fish throw the pointer refers to it .
   cout << fish;
//   int *randomPointer = 8; It will give me an error as it can't convert from int to int*

//---------------------------------------------------------------------------------------------------
    int betty = 13 ;
    int sandy = 13 ;

    passingByValue(betty);
    passingByReference(&sandy);
 //---------------------------------------------------------------------------------------------------


}
void passingByValue(int x){

    x = 90;
}

void passingByReference(int *x)
{
  *x=99;
}
