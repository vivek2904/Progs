//Linear Search

#include <iostream>
using namespace std;

int main()
{	int arr[10];
	int a;
	cout<<"Enter The array of Random data"<<endl<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the Number to be Searched :";
	cin>>a;
	
	
	for(int j=0;j<10;j++)
	{
		if(a!=arr[j]) continue;
		else
			cout<<"The number is found at position"<<j+1;
			break; //Iteration Stops if Number found
	}
	return 0;
}