#include<stdio.h>
main()
{
	char name[20];
	printf("Enter your full name:");
	//scanf("%s",&name);
	gets(name);
	//printf("\nFullname:%s",name);
	puts(name);
}
