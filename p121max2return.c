#include<stdio.h>
int max2(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	{
		return b;
	}
}
main()
{
	int c;
	c=max2(56,45);
	printf("\n max2=%d",c);
}
