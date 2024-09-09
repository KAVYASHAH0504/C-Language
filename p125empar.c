#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	int salary;
}
main()
{
	struct emp e[100];
	
	int no,i;
	
	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
	printf("\nEnter eno=>");
	scanf("%d",&e[i].eno);
	
	fflush(stdin);
	
	printf("\nEnter ename=>");
	gets(e[i].ename);
	
	printf("\nEnter salary=>");
	scanf("%d",&e[i].salary);
	
	}
	
	printf("\nno\tname\tsalary");
	printf("\n==============================");

	for(i=0;i<no;i++)
	{
	printf("\n%d\t%s\t%d",e[i].eno,e[i].ename,e[i].salary);
	}
}
