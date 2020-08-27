#include<iostream>

using namespace std;

struct node
{
	int x;
	int y;
	node(int key)
	{
		x=key;
	}
};

int main()
{
	//key=10;
	node *p = new node(8);
	cout<<p->x;
	cout<<p->y;
}
