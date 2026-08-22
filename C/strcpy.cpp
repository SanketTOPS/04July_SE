#include<stdio.h>
#include<string.h>
main()
{
	char str[10],cstr[10];
	printf("Enter any string:");
	scanf("%s",&str);
	printf("\nOriginal String:%s",str);
	printf("\nCopied String:%s",strcpy(cstr,str));
}
