//Simple Linked list Data structure to store 5 elements when data is inserted at start - 1 4 9 16 25

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void Insert(int);		//Prototype Declaration
void Print();			//Prototype Declaration
Node* head=NULL;		//A global variable pointing initially to NULL


void Insert(int value)
{
Node* temp=new Node();
temp->data=value;
temp->next=head;
head=temp;
}

void Print()
{
	Node* temp=head;	
	while(temp!=NULL)
	{	
		cout<<(*temp).data<<"  ";
		temp=temp->next;
	}
}


int main()
{
	Insert(25);
	Insert(16);
	Insert(9);
	Insert(4);
	Insert(1);

	Print();
	return 0;
}