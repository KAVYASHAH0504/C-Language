#include<stdio.h>
int max2(int no1,int no2)
{
	
	printf("\n enter 2nos=>");
    scanf("%d %d",&no1,&no2);
	if(no1>no2)
	{
		return no1;
	}
	{
		return no2;
	}
}
main()
{
	int c;
	c=max2(00,00);
	printf("\n max2=%d",c);
}
