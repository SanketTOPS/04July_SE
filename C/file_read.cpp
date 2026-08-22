#include<stdio.h>
main()
{
	FILE *fl;
	char str[100];
	fl=fopen("stdata.txt","r");
	//fscanf(fl,"%s",&str); //File read
	//fgets(str,100,fl);
	
	while(fgets(str,100,fl))
	{
		printf("%s",str);
	}
}
