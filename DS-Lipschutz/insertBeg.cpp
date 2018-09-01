#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
using namespace std;
struct Node {
	int data;
	Node* next;
};
Node* insertBeg(Node*,int);
void traverse(Node*);
int main() {
    Node* head;
	head = NULL;
	cout<<"Enter Number of Nodes:";
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter data:";
		cin>>x;
		head = insertBeg(head,x);
		traverse(head);
	}
}
Node* insertBeg(Node* head, int x)
{
    Node* temp = new Node();
    //Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	//(*temp).data = x;
	temp->next = head;
	//(*temp).next = NULL;
	head = temp;
    return head;
}

void traverse(Node* head)
{
	Node* temp = head;
	cout<<"List is:";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
}
