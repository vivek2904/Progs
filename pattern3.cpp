/* pattern as
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
  
*/

#include <iostream>
using namespace std;

int main()
{
	int totalrows,rowno,colspace,colstar;
	
	
	cout<<"Enter no of rows in upper triangle";
	cin>>totalrows;
	
	for(rowno=1;rowno<=totalrows;rowno++)
	{
		for(colspace=(totalrows-rowno);colspace>=0;colspace--)
		{
			cout<<" ";	
		}
		
		
		for(colstar=1;colstar<=rowno;colstar++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	for(rowno=(totalrows+1);rowno<(2*totalrows);rowno++)
	{
		for(colspace=1;colspace<=(rowno-totalrows);colspace++)
		{
			cout<<" ";
		}
		for(colstar=((2*totalrows)-rowno);colstar>0;colstar--)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	
	return 0;
}