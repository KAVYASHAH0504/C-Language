#include<stdio.h>

main()
{
	int mon,tue,wed,thu,total,avg;
	
	mon=22;
	tue=33;
	wed=44;
	thu=20;
	total=mon+tue+wed+thu;
	avg=total/4;
	
	printf("\nTotal = %d",total);
	printf("\nAverage = %d",avg);
}
