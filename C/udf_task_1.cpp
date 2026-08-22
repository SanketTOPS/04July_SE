#include<stdio.h>
int a=23,b=65;
void add()
{
	printf("\nAdd:%d",a+b);
}
void sub()
{
	printf("\nSub:%d",a-b);
}
void mul()
{
	printf("\nMul:%d",a*b);
}
void div()
{
	printf("\nDiv:%d",a/b);
}
main()
{
	int choice;
	printf("1:Add");
	printf("\n2:Sub");
	printf("\n3:Mul");
	printf("\n4:Div");
	printf("\nSelect your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		add();
		break;
		
		case 2:
		sub();
		break;
		
		case 3:
		mul();
		break;
		
		case 4:
		div();
		break;
		
		default:
		printf("\nError!Invalid Choice...");
		
	}
}


