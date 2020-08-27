#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void shortest_path(vector<int> adj[], int V, int s)
{
	int dist[V];
	bool visited[V];
	for(int i =0; i<V;i++)
	{
		dist[i] = INT_MAX;
		visited[i] = false;
	}
	dist[s] = 0;
	queue<int> q;
	q.push(s);
	visited[s] = true;
	while(q.empty() == false)
	{
		int u = q.front();
		q.pop();
		for(int v: adj[u])
		{
			if(visited[v]==false)
			{
				dist[v] = dist[u] + 1;
				visited[v]=true;
				q.push(v);
			}
		}
	}
	for(int i =0 ; i<V;i++)
	{
		cout<<dist[i]<<" ";
	}
	
	
}


void print_graph(vector<int> adj [], int v)
{
	for(int i=0; i <v; i++)
	{
		cout<<i<<"->";
		for (auto x: adj[i])
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main()
{
	int V=4;
	vector<int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	print_graph(adj,V);
	shortest_path(adj,V,1);
}
