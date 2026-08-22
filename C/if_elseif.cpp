#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("A is min");
	}
	else if(a>b)
	{
		printf("A is max");
	}
	else if(a==b)
	{
		printf("Both are equal...")	;
	}
	
}
