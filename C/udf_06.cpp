#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
main()
{
	int choice;
	printf("\nSelect your operation:");
	scanf("%d",&choice);
	if(choice==1)
	{
		add(34,65);
	}
	else if(choice==2)
	{
		sub(34,6);
	}
	else if(choice==3)
	{
		mul(45,76);
	}
	else
	{
		printf("\nError!Invalid Choice...");
	}
}
void add(int a,int b)
{
	printf("\nSum:%d",a+b);
}
void sub(int a,int b)
{
	printf("\nSub:%d",a-b);
}
void mul(int a,int b)
{
	printf("\nMul:%d",a*b);
}
