/*Pattern using command line argument in C
takes no of lines as input from command line argument

    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(int argc,char* argv[])
{
	int rows=atoi(argv[1]);
	int colspace,colstar,prow;
	
	for(prow=1;prow<=rows;prow++)
	{
		for(colspace=(rows-prow);colspace>=0;colspace--)
		{
			printf(" ");
		}
		
		for(colstar=1;colstar<=prow;colstar++)
		{
			printf("* ");
		}
		printf("\n");
    }		
}