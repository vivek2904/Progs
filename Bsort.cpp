//BubbbleSort

#include <iostream>
using namespace std;

int main()
{
	int arr[6]={2,5,1,7,9,4};
	int temp;
	for(int j=0;j<6-1;j++)
	{
	for(int i=0;i<6-1;i++)//n-1 because at max 2nd last will be swapped with last
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}
	}
	
	cout<<"The Sorted array is as : ";
	for(int k=0;k<6;k++)
	{
	cout<<arr[k]<<"  ";
	}
	return 0;
}

//AllRight