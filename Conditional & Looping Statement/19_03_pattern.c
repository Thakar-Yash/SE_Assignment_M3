/* 
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

#include<stdio.h>
main()
{
	int r, c, n;
	
	n=1;
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf(" %d ",n);
			c++;
			n++;
		}
		printf("\n");
		r++;
	}
}
