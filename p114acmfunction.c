#include<stdio.h>

void add()
{
	int no1,no2;
	printf("\n enter no=>");
	scanf("%d",&no1);
	printf("\n enter no=>");
	scanf("%d",&no2);
	printf("\n add=%d",no1+no2);
}
void cube()
{
	int a;
	printf("\n enter no=>");
	scanf("%d",&a);
	printf("\n cube=%d",a*a*a);
}
void max2()
{
	int no1,no2;
	printf("\n enter no=>");
	scanf("%d",no1);
	printF("\n enter no=>");
	scanf("%d",no2);
    if(no1>no2)
    {
    	printf("\n number is greater than =%d",no1);
	}
	else
	{
		printf("\n number is greater than =%d",no2);
	}
}
main()
{
	add();
	cube();
	max2();
}
