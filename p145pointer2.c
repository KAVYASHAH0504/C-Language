#include<stdio.h>

main()
{
	int a=22,b=2;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	
	printf("\nAdd =%d",*pa + *pb);
	printf("\nMUl =%d",*pa - *pb);
	printf("\nSub =%d",*pa * *pb);
	printf("\nDiv =%d",*pa / *pb);
}
