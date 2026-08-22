#include<stdio.h>
main()
{
	int n1,n2,choice;
	printf("Enter number1:");
	scanf("%d",&n1);
	printf("Enter number2:");
	scanf("%d",&n2);
	
	printf("\n1:Add");
	printf("\n2:Sub");
	printf("\n3:Mul");
	printf("\n4:Div");
	printf("\nSelect your operation:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nAdd:%d",n1+n2);
	}
	else if(choice==2)
	{
		printf("\nSub:%d",n1-n2);
	}
	else if(choice==3)
	{
		printf("\nMul:%d",n1*n2);
	}
	else if(choice==4)
	{
		printf("\nDiv:%d",n1/n2);
	}
	else
	{
		printf("\nError....Invalid Choice!");
	}
}
