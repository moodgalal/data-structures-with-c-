#include <iostream>
#include <vector>
using namespace std;

vector<int>adj[10];
int main()
{
    int nodes , edges;
    cin>>nodes>>edges;
    int x,y;

    for(int i = 0;i < edges;++i)
    {
        cin >> x>>y;
        adj[x].push_back(y);        // Insert y in adjacency list of x
     }
for(int i = 1;i <= nodes;++i)
{
        cout << "Adjacency list of node " << i << ": ";
    for(unsigned int j = 0;j < adj[i].size();++j)
        {
        if(j == adj[i].size() - 1)
                cout << adj[i][j] << endl;
        else
            cout << adj[i][j] << " --> ";
}
}
    return 0;
}
