#include<stdio.h>

main()
{
	int i,n,t1=0,t2=1,nextterm;
	printf("\nEnter the number of terms=>");
	scanf("%d",&n);
	printf("\nfibonacci series:");
	
	for(i=1;i <=n;++i)
	{
		printf("%d,",t1);
		nextterm= t1 +t2;
		t1=t2;
		t2= nextterm;
	}
}
