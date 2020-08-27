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
void DFS(vector<int> adj[], int V)
{
	int count=0;
	bool visited [V];
	for(int i=0; i<V; i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<V;i++ )
	{
		
		if(visited[i] == false)
		{
			DFSrec(adj,i,visited);
			count++;
		}
	}
	cout<<"total islands: "<<count;
}

int main()
{
	int V=6;
	vector <int> adj[V];
	
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	addEdge(adj,2,3);
	addEdge(adj,0,5);
	addEdge(adj,5,4);
	print_graph(adj,V);
	DFS(adj,V);
	
}
