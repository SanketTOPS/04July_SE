#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	
	if(a!=0 && b!=0) //parent
	{
		if(a>b) //child
		{
			printf("Sum:%d",a+b);
		}
		else
		{
			printf("\nMul:%d",a*b);
		}
	}
	else
	{
		printf("Error!Invalid number...");
	}
}
