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
void printlevel(node *root)
{
	if(root==NULL)
	{
		return;
	}
	queue<node*> q;
	q.push(root);
	while(q.empty() == false)
	{
		node *curr = q.front();
		q.pop();
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
               10
             /    \
		   /       \
		  20       30
		/   \      / \
       40    50   60  70
       /
      80
      /
    90
	
*/
{	
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	
	root->left->left = new node(40);
	root->left->right = new node(50);
	
	root->right->left = new node(60);
	root->right->right = new node(70);
	
	root->left->left->left = new node(80);
	
	root->left->left->left->left = new node(90);
	
	
	
	
	
	cout<<"Inorder traversing : ";
	inorder(root);
	cout<<endl;
	cout<<"Lelev order traversing: ";
	printlevel(root);
}
