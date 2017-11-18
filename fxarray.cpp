//Display Array elements using Function call


#include <iostream>
using namespace std;
int const DISTRICT=4;
int const MONTHS=3;

//Declaring Function Prototype
void display(float [DISTRICT][MONTHS]);
//Prototype Declaration done


int main()
{
	float sales[DISTRICT][MONTHS]={{1.12,3.4,3.45},{2.3,5.6,2.4},{5.4,4.3,4.6},{1.32,5.23,4.23}};
	display(sales);
	return 0;
}

void display(float Arrsales[DISTRICT][MONTHS])
{
	cout<<"		MONTH 1			MONTH 2			MONTH 3"<<endl<<endl;
	int d,m;
	for(d=0;d<DISTRICT;d++)
	{
		cout<<"DISTRICT "<<d+1<<" 	";
		for(m=0;m<MONTHS;m++)
		{
			cout<<Arrsales[d][m]<<"			";
		}
		cout<<endl;
	}	
}