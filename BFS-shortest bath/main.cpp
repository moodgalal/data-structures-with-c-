#include <iostream>
#include<queue>
using namespace std;
vector <int> v[10] ;   // vector for maintaining adjacency list explained above.
int level[10]; // to determine the level of each node
bool vis[10]; //mark the node if visited
void bfs(int s) {
    queue <int> q;
    q.push(s);
    level[ s ] = 0 ;  //setting the level of sources node as 0.
    vis[ s ] = true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i = 0;i < v[ p ].size() ; i++)
        {
            if(vis[ v[ p ][ i ] ] == false)
            {
        //setting the level of each node with an increment in the level of parent node
                level[ v[ p ][ i ] ] = level[ p ]+1;
                 q.push(v[ p ][ i ]);
                 vis[ v[ p ][ i ] ] = true;
  }
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
