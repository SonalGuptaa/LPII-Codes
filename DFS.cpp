#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[], int u,int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void DFSRec(vector<int> adj[],int s,bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            DFSRec(adj,u,visited);
        }
    }
}
void DFS(vector<int> adj[],int v,int s)
{
   bool visited[v+1];
   for(int i=0;i<v;i++)
   {
    visited[i]=false;
   }
   DFSRec(adj,s,visited);
}
int main()
{
    int v;
    cin>>v;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 3);
    addEdge(adj,1,4);
    addEdge(adj,4,3);
    DFS(adj,v,0);



}