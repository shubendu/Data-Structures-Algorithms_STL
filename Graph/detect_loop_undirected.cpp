#include<bits/stdc++.h>

using namespace std;


//detecting loop
bool DFSrec(vector<int> adj[],int s, int visited[], int parent)
{
	visited[s] = true;
	for(auto u :adj[s])
	{
		if(visited[u] == false)
		{
			if(DFSrec(adj,u,visited,s)==true)
				{
					return true;
				}
		}
		else if(u!=parent)
		{
			return true;
		}		
	}
	return false;
}

bool DFS(vector<int> adj[], int V)
{
	int visited[V];
	for(int i=0; i<V;i++)
	{
		visited[i] = false;
	}
	
	for(int i=0; i<V;i++)
	{
		if(visited[i] == false)
		{
			if(DFSrec(adj,i,visited,-1) == true)
				return true;
		}
	}
	return false;
}

//making edges
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

//printing graph
void print_graph(vector<int> adj[], int V)
{
	for(int i=0; i<V; i++)
	{
		cout<<i<<"=>";
		for(auto x: adj[i])
			{
				cout<<x<<" ";
			}
			cout<<endl;
	}
}

int main()
{
	int V=6;
	vector<int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	//addEdge(adj,1,3);
	addEdge(adj,2,4);
	addEdge(adj,3,2);
	addEdge(adj,4,5);
	print_graph(adj,V);
	cout<<DFS(adj,V);
}
