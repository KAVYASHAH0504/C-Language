#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("\nEnter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=n;j>=i;j--)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
