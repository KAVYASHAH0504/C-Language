#include<stdio.h>
main()
{
	int sun,mon,tue,wed,thurs,total,avg;
	
	printf("\nenter temp of sun =>");
	scanf("%d",&sun);
	
	printf("\nenter temp of mon =>");
	scanf("%d",&mon);
	
	printf("\nenter temp of tue =>");
	scanf("%d",&tue);
	
	printf("\nenter temp of wed =>");
	scanf("%d",&wed);
	
	printf("\nenter temp of thurs =>");
	scanf("%d",&thurs);
	
	total=sun+mon+tue+wed+thurs;
	avg=total/5;
	
	printf("\ntotal=%d",total);
	printf("\naverage=%d",avg);
}
