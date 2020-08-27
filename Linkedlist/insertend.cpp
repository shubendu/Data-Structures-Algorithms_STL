#include<iostream>

using namespace std;

struct Node
{
	int key;
	Node *next;
	Node(int x)
	{
		key=x;
		//next=NULL;
	}
	
};

Node *insertend(Node *head, int key)
{
	if(head==NULL)
		return new Node(key);
	Node *curr=head;
	
	cout<<curr->next<<endl;
	
	while(curr->next!=NULL)
		curr=curr->next;
		cout<<"running"<<endl;
		
	curr->next= new Node(key);
	return head;
}
void printlist(Node *head)
{
	Node *curr = head;
	while(curr!=NULL)
	{
		cout<<(curr->key)<<" ";
		curr=curr->next;
	}	
}

int main()
{
	Node *head=NULL;
	head = insertend(head,20);
	head = insertend(head,21);
	
	
	head = insertend(head,22);
	//cout<<head;
//	printlist(head);
	
}
