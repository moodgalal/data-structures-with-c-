#include <iostream>
#include <string>
#include <stack>
using namespace std;

void check(string c)
{
stack <char>s;
for(unsigned int i=0;i<c.size();i++)
    {
        if(c[i]=='('|| c[i]=='{' || c[i]=='[')
            s.push(c[i]);

        else if(c[i]==')' && s.top()=='(')
            s.pop();

        else if(c[i]=='}' && s.top()=='{')
            s.pop();

        else if(c[i]==']' && s.top()=='[')
            s.pop();
    }
    if(s.empty()==true )
        cout<<"balanced";
    else
        cout<<"not balanced";
}
int main()
{
   string exp;
    cout<<"Enter your expression"<<endl;
   cin>>exp;

    check(exp);
    return 0;
}
