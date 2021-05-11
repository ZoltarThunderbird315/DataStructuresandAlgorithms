#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct Node* head;

void insert(int data, int n)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	
	if(n == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	
	Node* temp2 = new Node();
	temp2 = head;
	for(int i=0; i<n-2; i++)
	{
		temp2 = temp2->next;
	}
	
	temp1->next = temp2->next;
	temp2->next = temp1;

}

void Reverse(Node *p)
{
	if(p->next == NULL)
	{
		head = p;
		return;
	}
	
	Reverse(p->next);
	struct Node* q = p->next;
	q->next = p;
	p->next = NULL;
}


void Print()
{
	Node* temp = new Node();
	temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
	cout<<"\n";
}

int main()
{
	head = NULL; //empty list
	insert(1,1);
	insert(2,2);
	insert(3,3);
	insert(5,3);
	
	Reverse(head);
	
	Print();
	
	
	return 0;
	
	
}
