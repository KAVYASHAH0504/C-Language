#include<stdio.h>

main()
{
	int a,b;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	
	printf("\nEnter 2nos =>");
	scanf("%d %d",&a,&b);
	
	printf("\nAdd =%d",*pa + *pb);
	printf("\nMUl =%d",*pa - *pb);
	printf("\nSub =%d",*pa * *pb);
	printf("\nDiv =%d",*pa / *pb);
}
