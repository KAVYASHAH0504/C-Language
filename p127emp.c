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
	
	int no,i,g=0,c=0;
	
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
	if(e[i].salary>20000)
	{
		printf("\n%d\t%s\t%d\tGood salary",e[i].eno,e[i].ename,e[i].salary);		
		g++;
	}
	else
	{
		printf("\n%d\t%s\t%d\tImporve",e[i].eno,e[i].ename,e[i].salary);
		c++;
	}
	}
	printf("\nTotal good = %d and imporve = %d",g,c);
}
