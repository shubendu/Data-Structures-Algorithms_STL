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

void printmid(Node *head)
{
	if (head==NULL) return;
	int count =0;
	Node *temp;
	for(temp = head;temp!=NULL;temp=temp->next)
	{
		count++;	
	}
		
	temp = head;
	for(int i = 0;i<count/2;i++)
	{
		temp=temp->next;
	}
	cout<<endl;
	cout<<"middle element "<<temp->key;
}

void printmidefficient(Node *head)
{
	if(head==NULL) return;
	Node *slow=head, *fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<endl;
	cout<<"middle element is "<<slow->key;
}

int main(){
	Node *head = NULL;
	head = insertbegin(head,10);
	head = insertbegin(head,130);
	head = insertbegin(head,56);
	head = insertbegin(head,147);
	head = insertbegin(head,106);
	head = insertbegin(head,33);

	printlist(head);
	//printmid(head);
	printmidefficient(head);
	
}
