#include <iostream>
using namespace std;



void merge(int* la,int* ra,int lenleft,int lenright)
{	
	int a,b,pos=0;
	int save[lenleft+lenright];
	
	while(a<lenleft && b<lenright)
	{
		if(la[a]<=ra[b])
		{
			save[pos]=la[a];
			a=a+1;
		}
			else
			{
			save[pos]=ra[b];
			b=b+1;
		}
		pos=pos+1;
	}
	
	while(a<lenleft)
	{
		save[pos]=la[a];
		a=a+1;
		pos=pos+1;
	}
	
	while(b<lenright)
	{
		save[pos]=ra[b];
		b=b+1;
		pos=pos+1;
	}
	
}

void passvalue(int* arr,int length)								//Passed the array initial address as well as its size
{	
	int i,j;
	
	if(length<2)												//If only one element, no sorting required
		return;
	
	i=length/2;													//Defining size of left array as well as right array			
	if(length%2==0)
		j=length/2;
	else
		j=(length/2)+1;											//Size Defined
	
	
	int la [i];													//Initialized Left and Right array
	int ra [j];
	
	for(int fv=0;fv<length;fv++)								//Fillvariable
	{
		if(fv<(length/2))
			la[fv]= arr[fv];
		else
			ra[(fv-(length/2))]= arr[fv];						//Left and right array saved
	}
	
	passvalue(la,i);											//Recursively sorting left and right sublist
	passvalue(ra,j);
	
	merge(la,ra,i,j);											//Call merge Function
	
}












int main()
{	
	int size,l;
	cout<<"Enter the size of Array :- \n";
	cin>>size;
	int arr[size];
	cout<<"Enter array elements one by one :";
	for(l=0;l<size;l++)
	{
		cin>>arr[l];
	}
		cout<<"Array Stored\n";
		
		
		passvalue(arr,size);								//Function call - arr is adress of arr[0]
		
		
		
		
		
		
		
		
		cout<<"Sorted Array is as : ";
		for(l=0;l<size;l++)
		{
			cout<<arr[l]<<" ";
		}
	return 0;
}