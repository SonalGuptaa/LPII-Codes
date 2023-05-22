#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[], int u,int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void BFS(vector<int> adj[],int v,int s)
{
    bool visited[v+1];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }

    }
}
int main()
{
    int v;
    cin>>v;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 3, 2);
    addEdge(adj, 2, 4);
    BFS(adj,v,0);


}