#include <stdio.h>
#include <math.h>
#include <string.h>
 /* a change is incorporated to understand the flow */
/* Another change is made to test */

void main()
{
	int i,j,k,n;
	printf("Enter Rows:\n");
	scanf("%d",&n);

	for(i=0,i<=n,i++)
	{
		for(j=i,j<=n,j++)
		{
			printf(" ");
		}
		for(k=1,k<i*2,k++)
		{
		printf("*");
		}
		printf("\n");
		// printf("\n");
		// printf("\n");
	}

	getch();

}
