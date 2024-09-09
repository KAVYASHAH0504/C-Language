#include<stdio.h>
main()
{
	int n,i,div,sum=0,cnt=0;
	printf("\nEnter limit and div =>");
	scanf("%d %d",&n,&div);
	for(i=1;i<=n;i++)
	{
		if(i%div==0)
		{
			printf("%d ",i);
			sum=sum+i;
			cnt=cnt+1;
		}
	}
	printf("\nSum = %d Count = %d",sum,cnt);
}
