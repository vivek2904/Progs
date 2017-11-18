//Product of two number using functon call

#include <iostream>
using namespace std;
//Declaring Function Prototype
float prod(float , float);
//^^^^Prototype Declaration Done^^^^

int main()
{
	float a,b,c;
	cout<<"Enter First Number";
	cin>>a;
	cout<<"Enter 2nd Number";
	cin>>b;
	c=prod(a,b);
	cout<<"The product of entered no is "<<c;
	return 0;
}

float prod(float f1, float f2)
{
	return f1*f2;
}