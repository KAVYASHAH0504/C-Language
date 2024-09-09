#include<stdio.h>

main()
{
	FILE *f1,*f2,*f3;
	char ch;
	int u=0,l=0;
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\pqr1.txt","w");
    f3=fopen("d:\\pqr2.txt","w");	
	while(ch!=EOF)
 {
 	ch=getc(f1);
 	if(isupper(ch))
	{
		putc(ch,f2);
	}
	else if(islower(ch))
	{
		putc(ch,f3);
	}
 }
fclose(f1);
fclose(f2);
fclose(f3);
printf("\ncopied");	
}
