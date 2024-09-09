#include<stdio.h>
struct student
{
	int sno;
	char sname[100];
	int  English,Hindi;
}
main()
{
	struct student  s[100];
	
	int no,i;
	
	printf("\nEnter Limit=>");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
	printf("\nEnter sno=>");
	scanf("%d",&s[i].sno);
	
	fflush(stdin);
	
	printf("\nEnter sname=>");
	gets(s[i].sname);

    printf("\nEnter English and Hindi=>");
	scanf("%d %d",&s[i].English,&s[i].Hindi);
    }
	printf("\nno\tname\tEnglish\tHindi\ttotal");	
    printf("\n======================================");
    
    for(i=0;i<no;i++)
    {
    	printf("\n%d\t%s\t%d\t%d\t%d",s[i].sno,s[i].sname,s[i].English,s[i].Hindi,s[i].English+s[i].Hindi);
	}
}
