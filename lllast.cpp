//Inserting elements at last

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head=NULL; 

void Insert(int);
void Print();


int main()
{
Insert(3);
Insert(2);
Insert(6);
Insert(5);
Insert(4);

Print();

return 0;
}


void Insert(int n)
{	
	Node* thead=head;
	Node* temp=new Node();
	temp->data=n;
	temp->next=NULL;
	
	
	if(head==NULL)
	{	
		head=temp;
		return;
	}	
	
	
	while(thead->next!=NULL)
	{
		thead=thead->next;
	}
	
	thead->next=temp;		
}

void Print()
{
	Node* temp=head;
	cout<<"The List is as :\n";
	
	while(temp != NULL)
	{
		cout<<temp->data;
		cout<<"  ";
		temp=temp->next;
	}
}