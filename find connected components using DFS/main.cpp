#include <iostream>
#include <vector>

using namespace std;

vector<int>Q[20];
bool visited[20];

void initialize()
{
   for(int i = 0;i < 20;++i)
     visited[i] = false;
}
void DFS(int s)
{
    visited[s] = true;
    for(unsigned int i=0; i<Q[s].size(); i++)
    {
      if(visited[Q[s][i]] == false)
            DFS(Q[s][i]);
    }
}

void BFS(int s);

int main()
{
    int nodes , edges , x,y ,connComponents;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
      cin>>x>>y;
      //Undirected graph
      Q[x].push_back(y);
      Q[y].push_back(x);
    }

    initialize();
    for(int i=1; i<=nodes; i++) // Check for each node if it was visited or not
    {
      if(visited[i] == false)
      {
          DFS(i);
          connComponents++;
      }
    }

     cout << "Number of connected components: " << connComponents << endl;
    return 0;
}




