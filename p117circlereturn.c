#include<stdio.h>

float area(float r)
{
	return r*r*3.14;
}
main()
{
	float ans;
	ans= area(100);
	printf("\n ans=%f",ans); 
}
