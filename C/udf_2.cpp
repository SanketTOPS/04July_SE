#include<stdio.h>
int a,b; //global
void getvalue()
{
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
}
void getsum()
{
	printf("\nSum:%d",a+b);
}
void getmul()
{
	printf("\nMul:%d",a*b);
}
main()
{
	getvalue();
	getsum();
	getmul();
}
