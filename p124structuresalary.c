#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	int salary;
	
}
main()
{
	struct emp e1,e2,e3,e4,e5;
	
	printf("\nEnter eno=>");
	scanf("%d",&e1.eno);
	
	fflush(stdin);
	
	printf("\nEnter ename=>");
	gets(e1.ename);
	
	printf("\nEnter salary=>");
	scanf("%d",&e1.salary);
	
	printf("\nEnter eno=>");
	scanf("%d",&e2.eno);
	
	fflush(stdin);
	
	printf("\nEnter ename=>");
	gets(e2.ename);
	
	printf("\nEnter salary=>");
	scanf("%d",&e2.salary);
	
	printf("\nEnter eno=>");
	scanf("%d",&e3.eno);
	
	fflush(stdin);
	
	printf("\nEnter ename=>");
	gets(e3.ename);
	
	printf("\nEnter salary=>");
	scanf("%d",&e3.salary);
	
	printf("\nEnter eno=>");
	scanf("%d",&e4.eno);
	
	fflush(stdin);
	
	printf("\nEnter ename=>");
	gets(e4.ename);
	
	printf("\nEnter salary=>");
	scanf("%d",&e4.salary);
	
printf("\nEnter eno=>");
	scanf("%d",&e5.eno);
	
	fflush(stdin);
	
	printf("\nEnter ename=>");
	gets(e5.ename);
	
	printf("\nEnter salary=>");
	scanf("%d",&e5.salary);
	

	
	printf("\nno\tname\tsalary");
	printf("\n==============================");
	printf("\n%d\t%s\t%d",e1.eno,e1.ename,e1.salary);
	printf("\n%d\t%s\t%d",e2.eno,e2.ename,e2.salary);
	printf("\n%d\t%s\t%d",e3.eno,e3.ename,e3.salary);
    printf("\n%d\t%s\t%d",e4.eno,e4.ename,e4.salary);
    printf("\n%d\t%s\t%d",e5.eno,e5.ename,e5.salary);

}
