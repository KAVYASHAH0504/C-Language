#include<stdio.h>
main()
{
	int i,j,n;
	printf("\nEnter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
