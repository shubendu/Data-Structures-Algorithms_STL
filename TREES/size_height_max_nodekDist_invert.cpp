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

//inorder traverse
void inorder(node *root)
{
	if (root!=NULL)
	{
		inorder(root->left);
		cout<<(root->key)<<" ";
		inorder(root->right);
	}
}

//size of tree
int getsize(node *root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return 1+getsize(root->left) + getsize(root->right);
	}
}

//max node in tree
int getmax(node *root)
{
	if(root ==NULL)
	{
		return INT_MIN;
	}
	else
	{
		return max(root->key,max(getmax(root->left),getmax(root->right)));
	}
}

//height of tree
int height(node *root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return max(height(root->left),height(root->right))+1;
	}
}

//print nodes at distance k
void printkDist(node *root, int k)
{
	if (root==NULL) return;
	if(k==0)
	{
		cout<<root->key<<" ";
	}
	else
	{
		printkDist(root->left,k-1);
		printkDist(root->right,k-1);
	}
}

//invert tree
node *invertTree(node *root) {
    if (root == NULL) {
        return NULL;
    }
    node *right = invertTree(root->right);
    node *left = invertTree(root->left);
    root->left = right;
    root->right = left;
    return root;
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
	cout<<"Size of tree is : "<<getsize(root);
	cout<<endl;
	cout<<"Max of tree is "<<getmax(root);
	cout<<endl;
	cout<<"Height of tree is "<<height(root);
	cout<<endl;
	cout<<"nodes at k dist are ";
	printkDist(root,2);
	
}
