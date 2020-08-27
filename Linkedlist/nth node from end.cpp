#include<iostream>

using namespace std;

struct Node{
	int key;
	Node *next;
	Node(int x)
	{
		key = x;
		next = NULL;
	}
};

Node *insertbegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp->next = head;
	return temp;
	
	
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

void n_node(Node *head)
{
	Node *tempp = head;
	while(tempp!=NULL && tempp->next!=NULL)
	{
			
		tempp=tempp->next;
		
	}
	cout<<tempp->key<<" ";
	for(i=n; i<0;i--)
	{
		tempp=tempp->next;
		
	}
		
	
}


int main(){
	Node *head = NULL;
	head = insertbegin(head,10);
	head = insertbegin(head,130);
	head = insertbegin(head,56);
	head = insertbegin(head,34);
	head = insertbegin(head,23);


	printlist(head);
	cout<<endl;
	n_node(head);

	
}
