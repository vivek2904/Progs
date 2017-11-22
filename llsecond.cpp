//Simple Linked list Data structure to store 5 elements when the position is specified
//Initially first position is always updated, then we can insert as first or 2nd and so on
//Inserting elements at specefied position

#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void Insert(int,int);		//Prototype Declaration
void Print();				//Prototype Declaration

Node* head=NULL;

void Insert(int data,int pos)
{
	Node* temp=new Node();
	temp->data=data;
	temp->next=NULL;
	
	if(pos==1)
		{
		temp->next=head;
		head=temp;
		return;				//Stop the function now if Insertion is at first position
		}
		
	Node* temphead=head;
	
	for(int i=0;i<pos-2;i++)
	{
		temphead=temphead->next;
	}
	
	temp->next=temphead->next;
	temphead->next=temp; 
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


int main()
{
	Insert(2,1);
	Insert(11,2);
	Insert(7,2);
	Insert(5,1);
	Insert(9,2);
	
	Print();
	
	return 0;
}