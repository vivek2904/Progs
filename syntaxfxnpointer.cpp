//Function Pointer to Print your name as Hello Vivek
#include <iostream>
using namespace std;

void PrintHello (const char* );

int main()
{
	void (*ptr)(const char*);			//Declare Function Pointer
	ptr = PrintHello;					//Initialize Function Pointer
	ptr("Vivek");						//Passing Value to Printhello Function	
}

void PrintHello(const char *name)		// char* as constant string is passed
{
	cout<<"Hello "<<name;
}