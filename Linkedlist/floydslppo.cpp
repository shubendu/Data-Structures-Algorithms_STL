#include<iostream>

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

Node *insertBegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp->next = head;
	return temp;
}
void printlist(Node *head)
{
	Node *curr = head;
	cout<<curr<<" --> ";
	while(curr!=NULL)
	{
		cout<<"||"<<(curr->key)<<"|"<<curr->next<<"|| --> ";
		curr=curr->next;
	}	
}

bool isloop(Node *head)
{
	Node *slow_p = head, *fast_p = head;
	
	while(fast_p!=NULL && fast_p->next!=NULL)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if(slow_p==fast_p)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	Node *head=NULL;
	head = insertBegin(head,20);
	head = insertBegin(head,59);
	head = insertBegin(head,10);
	//creating loop
	head->next->next->next = head;
	
	//printlist(head);
	if (isloop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop";
	
}
