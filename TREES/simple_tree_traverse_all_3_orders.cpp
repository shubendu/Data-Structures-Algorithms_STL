#include<iostream>

using namespace std;

struct node{
	int key;
	node *left,*right;
	node(int k)
	{
		key = k;
		left=right=NULL;
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

void preorder(node *root)
{
	if (root!=NULL)
	{
		cout<<(root->key)<<" ";
		inorder(root->left);
		inorder(root->right);
	}
}

void postorder(node *root)
{
	if (root!=NULL)
	{
		inorder(root->left);
		inorder(root->right);
		cout<<(root->key)<<" ";
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
	
	cout<<"postorder traversing : ";
	postorder(root);
	cout<<endl;
	
	cout<<"preorder traversing : ";
	preorder(root);
}
