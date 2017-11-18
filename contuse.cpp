/*3 is not printed because control
 bypasses the statement to print */



#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter A no";
	cin>>num;
	for(num;num>0;num--)
	{	
		if(num==3) continue;
		cout<<num<<"\n";
	}
return 0;		
}