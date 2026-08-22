#include<stdio.h>
int a,b;
void input()
{
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
}
void add()
{
	printf("\nSum:%d",a+b);
}
void mul()
{
	printf("\nMul:%d",a*b);
}
main()
{
	input();
	add();
	mul();
	
}
