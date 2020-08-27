#include<iostream>
#include<vector>


using namespace std;

struct Node
{
	int key;
	Node *next;
	Node(int x)
	{
		key=x;
		next=NULL;
	}
	
};

Node *insertend(Node *head, int key)
{
	if(head==NULL)
		return new Node(key);
	Node *curr=head;
	
	
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
		
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

Node *revList(Node *head)
{
	vector<int> arr;
	for(Node *curr=head; curr!=NULL; curr=curr->next)
	{
		arr.push_back(curr->key);
	}
	for(Node *curr=head; curr!=NULL; curr=curr->next)
	{
		curr->key = arr.back();
		arr.pop_back();
	}
	return head;
	
}

int main()
{
	Node *head=NULL;
	head = insertend(head,20);
	head = insertend(head,21);
	head = insertend(head,22);
	head = insertend(head,23);
	head = insertend(head,24);
	printlist(head);
	cout<<endl;
	revList(head);
	cout<<endl;
	printlist(head);
	
	
}
