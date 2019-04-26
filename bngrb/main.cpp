#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <class Type> // When we use it with a function it doesn't require
Type myFunction(Type m) //to make a prototype of the function with it or it will give a syntax error
{
    return m*m;
}

template <class type1 , class type2>
type1 myFunction2(type1 x , type2 y)
{
    return x*y;
}
int main()
{
   /* string firstname , lastname;
    string line1 , line2;

    cin>>firstname>>lastname;
    cout<<firstname<<lastname<<endl;

    getline(cin , line1);
    getline(cin , line1);
    cout<<line1; */

   /* cout<<"Enter bar separated data: E.G. Ahmed|Aly|150\n\n";

    string firstName , lastName ;
    double salary;

    getline(cin,firstName , '|');
    getline(cin , lastName , '|');
    cin>>salary;

    cout<<firstName<<endl;
    cout<<lastName<<endl;
    cout<<salary<<endl; */

   /* string data = "Mahmoud Galal";
    string firstName , lastName;

    istringstream myStringStream (data);

    myStringStream>>firstName>>lastName;

    cout<<firstName<<endl<<lastName<<endl;  */

    int x = 5;
    double y = 2.30;

    cout<<myFunction(x);
    cout<<myFunction2(x,y);
}
