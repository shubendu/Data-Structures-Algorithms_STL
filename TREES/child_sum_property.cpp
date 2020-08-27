#include<iostream>
#include<queue>

using namespace std;

struct node{
	int key;
	node *left, *right;
	node(int x)
	{
		key = x;
		left = right = NULL;
	}
};

void inorder(node *root)
{
	if (root!=NULL)
	{
		inorder(root->left);
		cout<<(root->key)<<" ";
		inorder(root->right);
	}
}
void printlevelline(node *root)
{
	if(root==NULL)
	{
		return;
	}
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	
	while(q.size()>1)
	{
		node *curr = q.front();
		q.pop();
		
		if(curr==NULL)
		{
			cout<<"\n";
			q.push(NULL);

			continue;
		}
		cout<<curr->key<<" ";
		
		
		if(curr->left!=NULL)
		{
			q.push(curr->left);
		}
		if(curr->right!=NULL)
		{
			q.push(curr->right);
		}
	}
	
	
	
}

int main()
/*
               20
             /    \
		   /       \
		  8       12
		/   \      / \
       3    5  

	
*/
{	
	node *root = new node(20);
	root->left = new node(8);
	root->right = new node(12);
	
	root->left->left = new node(3);
	root->left->right = new node(5);
		
	
	cout<<"Inorder traversing : ";
	inorder(root);
	cout<<endl;
	cout<<"Level order line traversing: \n";
	printlevelline(root);
}
