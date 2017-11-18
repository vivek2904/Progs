//LinearSorting
//Its not linear now, will have to change to Linear Sort
//In Linear Sorting first a minimun has to be found which is swapped. then again 2nd minimum
//Define a minimum function and call it to fing minimum and use it for doing the task

#include <iostream>
using namespace std;

void min(int []);
void display(int []);
int main()
{
	int age [5]={9,5,7,8,6};
	min(age);
	return 0;
} 

void min(int Arr[5])
{
	for(int j=0;j<4;j++)
	{
	int minimum=Arr[j];
	int minid;
	for(int i=j+1;i<5;i++)
		{
			if(minimum<=Arr[i]) continue;
			else
			minimum=Arr[i];
			minid=i;
		}

		//swap Arr[j] with minimum
		
		int temp=Arr[minid];
		Arr[minid]=Arr[j];
		Arr[j]=temp;
	}
	display(Arr);
}

void display(int newarr[5])
{
	cout<<"The sorted Array is as :";
	int k;
	for(k=0;k<=4;k++)
		{
		cout<<newarr[k]<<" ";
		}
}