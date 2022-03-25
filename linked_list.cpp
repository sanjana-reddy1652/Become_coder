#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int n)
		{
			data=n;
			next=NULL;
		}
};
void insert_end(node* &head , int n)
{
	node* x = new node(n);
	node* temp = head;
	if(head==0)
	{
		head=x;
	}
	else
	{
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=x;
	}
	
}
void insert_begin(node* &head , int n)
{
	node* x = new node(n);
	x->next=head;
	head=x;
}
bool search(node* head , int key)
{
	node* temp = head;
	while (temp!=NULL)
	{
		if(temp->data==key)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
}
void display(node* head)
{
	node* temp = head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	node* head = NULL;
	insert_begin(head,5);
	insert_begin(head,4);
	insert_begin(head,3);
	insert_begin(head,2);
	insert_begin(head,1);
	display(head);
	insert_end(head,6);
	display(head);
	return 0;
}
