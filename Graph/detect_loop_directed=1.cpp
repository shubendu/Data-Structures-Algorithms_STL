#include<bits/stdc++.h>

using namespace std;

//detecting loop
bool DFSrec(vector<int> adj[],int s, int visited[], int recSt[])
{
	visited[s] = true;
	recSt[s] = true;
	for(auto u :adj[s])
	{
		if(visited[u] == false&&DFSrec(adj,u,visited,recSt))
		{
			return true;
		}
		else if(recSt[u]==true)
		{
			return true;
		}		
	}
	recSt[s] = false;
	
	return false;
}



bool DFS(vector<int> adj[], int V)
{
	int visited[V];
	int recSt[V];//recursive stack
	for(int i=0; i<V;i++)
	{
		visited[i] = false;
		recSt[i]=false;
	}
	
	for(int i=0; i<V;i++)
	{
		if(visited[i] == false)
		{
			if(DFSrec(adj,i,visited,recSt) == true)
				return true;
		}
	}
	return false;
}





//making edges
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
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
	addEdge(adj,2,1);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	addEdge(adj,4,5);
	//addEdge(adj,5,3);
	print_graph(adj,V);
	cout<<DFS(adj,V);
}
