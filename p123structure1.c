#include<stdio.h>
struct stu
{
	int sno;
	char sname[20];
    int eng,hindi;	
}
main()
{
	struct stu s1,s2,s3;
	
	printf("\nenter sno=>");
	scanf	("%d",&s1.sno);
	
	fflush(stdin);
	
	printf("\nenter sname=>");
	gets(s1.sname);
	
	printf("\nenter english and hindi=>");
	scanf("%d%d",&s1.eng,&s1.hindi);
	
	printf("\nenter sno=>");
	scanf("%d",&s2.sno);
	
	fflush(stdin);
	
	printf("\nenter sname=>");
	gets(s2.sname);	
	
	printf("\nenter english and hindi=>");
	scanf("%d %d",&s2.eng,&s2.hindi);
	
	printf("\nenter sno=>");
	scanf("%d",&s3.sno);
	
	fflush(stdin);
	
	printf("\nenter sname=>");
	gets(s3.sname);
	
	printf("\nenter english and hindi=>");
	scanf("%d %d",&s3.eng,&s3.hindi);

    printf("\nno\tname\tegnlish\thindi\ttotal");
    printf("\n==========================================");
    printf("\n%d\t%s\t%d\t%d\t%d",s1.sno,s1.sname,s1.eng,s1.hindi,s1.eng+s1.hindi);
    printf("\n%d\t%s\t%d\t%d\t%d",s2.sno,s2.sname,s2.eng,s2.hindi,s2.eng+s2.hindi);
    printf("\n%d\t%s\t%d\t%d\t%d",s3.sno,s3.sname,s3.eng,s3.hindi,s3.eng+s3.hindi);    
    printf("\n==========================================");
    
}
