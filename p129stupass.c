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
	
	int no,i,p=0;
	
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
	if(s[i].English+s[i].Hindi>50)
    {
    	printf("\n%d\t%s\t%d\t%d\t%d\t Pass",s[i].sno,s[i].sname,s[i].English,s[i].Hindi,s[i].English+s[i].Hindi);
	    p++;
	}
    }
    printf("\nTotal pass= %d",p);
}
