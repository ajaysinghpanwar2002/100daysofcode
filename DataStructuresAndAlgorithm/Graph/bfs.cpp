// bfs traversal

/*
you are given an undirected and disconnected graph G (V,E) having V vertices numbered from 0 to v-1 and E Edges. your task is to print its BFS traversal starting from the 0th vertex.
*/
#include<Bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map<int, list<int>> &adjList,vector<pair<int,int>> &edges)
{
    for (int i = 0; i < edges.size();i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}
vector <int> BFS(int vertex, vector<pair<int,int>> edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int,bool> visited;

    prepareAdjList(adjList,edges);

    // travers all components of graph 
    for (int i = 0; i < vertex;i++)
    {
        if(!visited[i])
        {
            bfs(adjList,visited,ans,i);
        }
    }
    return ans;
}

int main(){
    
    return 0;
}