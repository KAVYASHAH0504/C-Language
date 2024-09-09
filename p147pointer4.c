#include<stdio.h>

main()
{
	int a[10]={11,22,33,44,55,66,77,88,99,111},i;
	int *b;
	b=&a;
	
	for(i=0;i<10;i++)
	{
		printf("%d ",*b);
		b++;
	}
}
