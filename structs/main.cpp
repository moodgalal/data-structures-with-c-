#include <iostream>
#include <string>
using namespace std;

struct newName
{
    string name;
    int age;
};
int main()
{
  newName mood = {"Mahmoud Galal" , 19};
  cout<<mood.name;
}
