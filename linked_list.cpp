#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct Node* head;
void insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	
	if(head != NULL)
	{
		temp->next = head;
	}
	
	head = temp;
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
	int t;
	cout<<"Enter the number of elements in the linked list: ";
	cin>>t;
	cout<<endl;
	int x;
	for(int i=0; i<t; i++)
	{
		cout<<"Enter the number: ";
		cin>>x;
		insert(x);
		Print();
	}
	
	return 0;

}
