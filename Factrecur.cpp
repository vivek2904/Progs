//Factorial of Number Using Recursion


#include <iostream>
using namespace std;

int fact(int); //Function Prototype

int main()
{	
	int no,Ans;
	cout<<"Enter the Number whos Factorial is to be determined :";
	cin>>no;
	
	Ans = fact(no);
	cout<<"The required factorial is :"<<Ans;
	return 0;
}

int fact(int n)
{	
	if(n>1)
	return (n*fact(n-1));
	if(n==0)
	return 1;
}