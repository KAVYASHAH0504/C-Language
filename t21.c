#include<stdio.h>
main()
{
	int eng,guj,ac,total,avg;
	
    printf("\nEnter marks of english =>");
    scanf("%d",&eng);
    
    printf("\nEnter marks of gujarati =>");
    scanf("%d",&guj);
    
    printf("\nEnter marks of account =>");
    scanf("%d",&ac);
	
	total=eng+guj+ac;
	avg=total/3;
	
	printf("\ntotal=%d",total);
	printf("\naverage=%d",avg);
}
