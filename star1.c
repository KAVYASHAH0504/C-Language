#include<stdio.h>

main()
{
	int i,n,j;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}	
		printf("\n");
	}
}