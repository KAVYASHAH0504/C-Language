#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int u=0,l=0;
	f1=fopen("d:\\abc.txt","r");
while(ch!=EOF)
{
	
	ch=getc(f1);
	if(isupper(ch))
	{
		printf("%c",tolower(ch));
	}
	else if(islower(ch))
	{
		printf("%c",toupper(ch));
	}
}
fclose(f1);
}
