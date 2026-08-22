#include<stdio.h>
main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18) //TRUE
	{
		printf("You are eligible for voating");
	}
	else //FALSE
	{
		printf("Sorry! You are not eligible for voating");
	}
}
