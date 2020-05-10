/*
	Name: C Program for Print Pattern
	INPUT = 4

		1 2 3 4
		 2 3 4
		  3 4
		   4
		   4
		  3 4
		 2 3 4
		1 2 3 4
	
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter Number : "); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>1;j--)
			printf(" ");
		for(j=i;j<=n;j++)
			printf("%d ",j);
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=i;j>1;j--)
			printf(" ");
		for(j=i;j<=n;j++)
			printf("%d ",j);
		printf("\n");
	}
}
