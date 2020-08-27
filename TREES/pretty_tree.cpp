#include <iostream>
#include <string>
using namespace std;

// Data structure to store a Binary Tree node
struct Node
{
	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		this->left = this->right = NULL;
	}
};

struct Trunk
{
	Trunk *prev;
	string str;

	Trunk(Trunk *prev, string str)
	{
		this->prev = prev;
		this->str = str;
	}
};

// Helper function to print branches of the binary tree
void showTrunks(Trunk *p)
{
	if (p == NULL)
		return;

	showTrunks(p->prev);

	cout << p->str;
}

// Recursive function to print binary tree
// It uses inorder traversal
void printTree(Node *root, Trunk *prev, bool isLeft)
{
	if (root == NULL)
		return;

	string prev_str = "	";
	Trunk *trunk = new Trunk(prev, prev_str);

	printTree(root->left, trunk, true);

	if (!prev)
		trunk->str = "---";
	else if (isLeft)
	{
		trunk->str = ".---";
		prev_str = "   |";
	}
	else
	{
		trunk->str = "`---";
		prev->str = prev_str;
	}

	showTrunks(trunk);
	cout << root->data << endl;

	if (prev)
		prev->str = prev_str;
	trunk->str = "   |";

	printTree(root->right, trunk, false);
}



int main()
{

	// Construct above tree
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	
	root->right->left = new Node(60);
	root->right->right = new Node(70);
	
	root->left->left->left = new Node(80);
	
	root->left->left->left->left = new Node(90);

	// print constructed binary tree
	printTree(root, NULL, false);
	

	

	return 0;
}
