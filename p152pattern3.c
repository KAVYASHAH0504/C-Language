#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("\nEnter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
