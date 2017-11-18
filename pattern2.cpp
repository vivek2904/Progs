/*pattern as
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
	int totalrows,rownumber,colspace,colstar;
	
	cout<<"Enter Total number of rows the pattern is to be printed";
	cin>>totalrows;
	
	for(rownumber=1;rownumber<=totalrows;rownumber++)
	{
		for(colspace=(totalrows-rownumber);colspace>=1;colspace--)
		{
			cout<<" ";
		}
		for(colstar=1;colstar<=rownumber;colstar++)
		{
			cout<<"* ";
		}
	    cout<<"\n";
	}
	return 0;	
}