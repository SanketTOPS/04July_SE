#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	printf("Enter any string:");
	scanf("%s",&str);
	printf("\nOriginal String:%s",str);
	printf("\nReverse String:%s",strrev(str));
}
