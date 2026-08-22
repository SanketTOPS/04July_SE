#include<stdio.h>
void add(int a,int b)
{
	printf("\nSum:%d",a+b);
}
void mul(int a,int b)
{
	printf("\nMul:%d",a*b);
}
main()
{
	int n1,n2;
	printf("Enter Number1:");
	scanf("%d",&n1);
	printf("Enter Number2:");
	scanf("%d",&n2);
	add(n1,n2);
	mul(n1,n2);
}
