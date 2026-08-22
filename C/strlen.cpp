#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	printf("Enter any string:");
	scanf("%s",&str);
	printf("\nYour String:%s",str);
	printf("\nTotal Char.:%d",strlen(str));
}
