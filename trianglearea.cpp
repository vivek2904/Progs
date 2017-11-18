#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int base,height;
	
	if (argc>3)
	{
		printf("Enter valid Number of arguments");
		return 1;
	}
	else
	{	
	base= atoi(argv[1]);
	height= atoi(argv[2]);
	float area=0.5*base*height;
	printf("%.2f",area);
}
}