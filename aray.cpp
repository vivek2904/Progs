#include <iostream>
using namespace std;
const int month=3;
const int week=4; 
int main()
{
	float sales [month][week];
	
	for(int i=0;i<month;i++)
	{
		for(int j=0;j<week;j++)
		{
			cout<<"Enter Sales for "<<i+1<<" month "<<j+1<<" week"<<endl;
			cin>>sales[i][j];
		}
		
	}
	
	cout<<"Week 1			Week 2			Week 3			Week 4"<<endl;
	
	for(int i=0;i<month;i++)
	{
		for(int j=0;j<week;j++)
		{
			cout<<sales[i][j]<<"			";
		}
		cout<<endl;
	}
	return 0;
}