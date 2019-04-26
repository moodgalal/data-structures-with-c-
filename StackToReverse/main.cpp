#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverseString(string s  , int n)
{
    stack<char> reverseStack;

    for(int i=0; i<n; i++)
    {
        reverseStack.push(s.at(i));
    }

    for(int i=0; i<n; i++)
    {
        s.at(i) = reverseStack.top();
        reverseStack.pop();
    }
  return s;
}
int main()
{
  cout<<"Enter a string"<<endl;
  string s;
  getline(cin,s);
  string s2 = reverseString(s ,s.size());
  bool test = true;

  for(unsigned int i=0; i<s.size(); i++)
  {
    if(s.at(i)==' ' || s2.at(i) == ' ')
      continue;
      else
      {
        if(s.at(i) != s2.at(i))
        {
           test = false;
           break;
        }
    }
  }
  if(test == true)
    cout<<"The words are identical"<<endl;
  else
    cout<<"The words are not identical"<<endl;
}
