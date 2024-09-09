#include<stdio.h>

struct student
{
int no,e;	
};

union stu
{
int no,e;	
};

main()
{
	struct student s1;
	union stu s2;
	
	s1.no=5;
	s1.e=20;
	
	s2.no=5;
	s2.e=25;
	
	printf("\nNo = %d Eng = %d",s1.no,s1.e);
	printf("\nNo = %d Eng = %d",s2.no,s2.e);
}
