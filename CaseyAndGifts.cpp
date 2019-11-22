#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> edge(10000);
vector<bool> visited(100000,0);
void DFS(int node)
{
    if(visited[node]) return;

    visited[node]=1;

    for(int i=0;i<edge[node].size();i++)
        DFS(edge[node][i]);
}
int main()
{
	// your code goes here
	int n,m,c=0;
	cin>>n>>m;
	for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;

        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            c++;
            DFS(i);
        }
    }

    cout<<c;
	return 0;
}