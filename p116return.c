#include<stdio.h>
void add()
{
	int a,b;
	printf("\n enter 2nos =>");
	scanf("%d %d",&a,&b);
	printf("\nadd=%d",a+b);
}
void areaoftri()
{
	int h,b;
	printf("\n enter height =>");
	scanf("%f",&h);
	printf("\n enter base =>");
	scanf("%f",&b);
	printf("\n area of triangle=%.2f",(h*b*0.5));
}
void areaofcir()
{
	float r;
	printf("\n enter radius =>");
	scanf("%f",&r);
	printf("\n area of circle=%.2f",(3.14*r*r));
}
void max2()
{
	int no1,no2;
	printf("\n enter no1=>");
	scanf("%d",&no1);
	printf("\n enter no2=>");
	scanf("%d",&no2);
	if(no1>no2)
	{
		printf("\n number is grater than =%d",no1);
	}
	else
	{
		printf("\n number is grater than =%d",no2);
	}
}
void oddeven()
{
	int no;
	printf("\n enter no=>");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("\n numer is even");
	}
	else
	{
		printf("\n number is odd");
	}
}
void pn()
{
	int no;
	printf("\n enter no=>");
	scanf("%d",&no);
	if(no>0)
	{
	printf("\n number  is positive");
    }
    else
    {
    printf("\n number is negative");
	}
}
void max3()
{
	int no1,no2,no3;
	printf("\n enter 3 numbers");
	scanf("%d %d %d",&no1,&no2,&no3);
	
	if(no1>no2 && no1>no3)
	{
		printf("\n no1 is grater ");
	}
	else if(no2>no1 && no2>no3)
	{
		printf("\n no2 is grater ");
	}
	else if(no3>no1 && no3>no2)
	{
		printf("\n no3 is grater ");
	}
	else
    {
    	printf("\n all are equal");
	}
}
main()
{
	add();
	areaoftri();
	areaofcir();
	max2();
	oddeven();
	pn();
	max3();
}
	
