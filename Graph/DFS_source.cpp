#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//creating graph list
void addEdge(vector<int> adj[], int u, int v )
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

//printing graph
void print_graph(vector<int> adj[], int V)
{
	for(int i=0; i<V; ++i)
	{
		cout<<i<<"->";
		for(auto x: adj[i])
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

//DFSrecursive
void DFSrec(vector<int> adj[], int s, bool visited[])
{	
	visited[s] = true;
	cout<<s<<" ";
	for(int u: adj[s])
	{
		if (visited[u] == false)
		{
			DFSrec(adj,u,visited);
		}
	}
}

//DFS
void DFS(vector<int> adj[], int V, int s)
{
	
	bool visited [V];
	for(int i=0; i<V; i++)
	{
		visited[i]=false;
	}

	DFSrec(adj,s,visited);


}

int main()
{
	int V=6;
	vector <int> adj[V];
	
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	addEdge(adj,0,5);
	print_graph(adj,V);
	int s = 5;
	DFS(adj,V,s);
	
}
