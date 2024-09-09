#include<stdio.h>

main()
{
	int a=22;
	int *b;
	b=&a;
	
	printf("\n%d %d",a,b);
	
	printf("\n%d %d",a,*b);
	
	a=50;
	printf("\n%d %d",a,*b);

    *b=100;
    printf("\n%d %d",a,*b);
    
    a=200;
    printf("\n%d %d",a,*b);n
}
