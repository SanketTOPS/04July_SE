#include<stdio.h>
#include<string.h>
main()
{
	char pas[10],cpas[10];
	printf("Enter Password:");
	scanf("%s",&pas);
	printf("Enter Confirm Password:");
	scanf("%s",&cpas);
	
	//if(strcmp(pas,cpas)==0)
	if(strcmpi(pas,cpas)==0)
	{
		printf("Match Done!");
	}
	else
	{
		printf("Error!");
	}
	
}
