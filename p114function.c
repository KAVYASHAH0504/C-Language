#include<stdio.h>
//function with argument
void add(int no1,int no2)
{
	printf("\n add=%d",no1+no2);
}
void cube(int a)
{
	printf("\n cube=%d",a*a*a);
}
void max2(int no1,int no2)
{
	if(no1>no2)
    {
    	printf("\n number1 is greater than number2");
	}
	else
	{
		printf("\n number2 is greater than number1");
	}
}
main()
{
	int no1,no2;
	printf("\n enter no=>");
	scanf("%d",&no1);
	printf("\n enter no=>");
	scanf("%d",&no2);
	
	add(no1,no2);
	cube(no1);
	max2(no1,no2);
}
