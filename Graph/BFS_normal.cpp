#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//making graph list
void addEdge(vector<int> adj[], int u, int v )
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


//printing graph in list
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

void BFS_simple(vector<int> adj[], int V, int s)
{
	bool visited[V];
	
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	queue<int> q;
	visited[s] = true;
	q.push(s);
	
	while(q.empty() == false)
	{
		int u = q.front();
		q.pop();
		cout<<u<<" ";
		for(int v: adj[u])
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
	int V=5;
	vector <int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	addEdge(adj,2,4);
	addEdge(adj,3,4);
	print_graph(adj,V);
	cout<<endl;
	int s = 1;
	BFS_simple(adj,V,s);
	
}
