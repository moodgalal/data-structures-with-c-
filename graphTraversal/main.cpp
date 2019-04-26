#include <iostream>
#include<cstring>
using namespace std;

bool connections[10][10];

int main()
{
    memset(connections , false , sizeof(connections));
    int nodes;
    int edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
      int x,y;
      cin>>x>>y;

      connections[x][y] = true;
    }


    if(connections[1][4] == true)
      cout << "There is an edge between 3 and 4" << endl;
  else
      cout << "There is no edge between 3 and 4"<< endl;

  if(connections[2][3] == true)
      cout << "There is an edge between 2 and 3" << endl;
  else
      cout << "There is no edge between 2 and 3" << endl;
    return 0;
}
