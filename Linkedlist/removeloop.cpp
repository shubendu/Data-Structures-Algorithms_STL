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

void printlist(Node *head)
{
	for(Node *curr=head; curr!=NULL; curr=curr->next)
	{
		cout<<curr->key<<" ";
	}
	
}

Node *insertBegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp->next = head;
	return temp;	
}

//to check loop
bool isloop(Node *head)
{
	Node *slow_p = head, *fast_p = head;
	
	while(fast_p!=NULL && fast_p->next!=NULL)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if(slow_p==fast_p)
		{
			cout<<"loop found"<<endl;
			return true;
		}
	}
	cout<<"no loop"<<endl;
	return false;
}

//removing loop
void removeloop(Node *head)
{
	Node *slow = head;
	Node *fast = head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast = fast->next->next;
		if(slow==fast)
			{
				break;
			}
	}
	if(slow!=fast)
	{
		return;
	}
	slow=head;
	while(slow->next!=fast->next)
	{
		slow= slow->next;
		fast= fast->next;
	}
//	cout<<fast->key<<endl;
//	cout<<"breaking loop here"<<endl;
	fast->next=NULL;
	
}

int main()
{
	Node *head = NULL;
	head = insertBegin(head,60);
	head = insertBegin(head,50);
	head = insertBegin(head,40);
	head = insertBegin(head,30);
	head = insertBegin(head,20);
	head = insertBegin(head,10);
	head->next->next->next->next->next->next = head;
//	printlist(head);
	isloop(head);
	cout<<head<<endl;
	cout<<head->next->next->next->next->next->next<<endl;
	
	removeloop(head);

	isloop(head);
	
	cout<<head->next<<endl;
	printlist(head);

}
