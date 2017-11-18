#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int fibo(int);									//Function prototype
int main(int argc,char* argv[])
{
int no=atoi(argv[1]);

printf("The series till %d term is as",no);

for(int i=0;i<no;i++)
{
	int result=fibo(i);
	printf("%d ",result);
}
return 0;
}

int fibo(int a)
{	
	if(a<2)
		return a;
	else
		
	return (fibo(a-1)+fibo(a-2));
}