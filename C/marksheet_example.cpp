#include<stdio.h>
main()
{
	int s1,s2,s3,s4,total;
	float pr;
	
	printf("Enter Subject1:");
	scanf("%d",&s1);
	printf("Enter Subject2:");
	scanf("%d",&s2);
	printf("Enter Subject3:");
	scanf("%d",&s3);
	printf("Enter Subject4:");
	scanf("%d",&s4);
	
	total=s1+s2+s3+s4;
	pr=total/4;
	
	printf("\nTotal:%d",total);
	printf("\nPR:%.2f",pr);
	
	if(pr>=70)
	{
		printf("\nResult:Dist. or A+");
	}
	else if(pr>=60)
	{
		printf("\nResult:First Class or A");
	}
	else if(pr>=50)
	{
		printf("\nResult:Second Class or B");
	}
	else if(pr>=40)
	{
		printf("\nResult:Pass Class or C");
	}
	else
	{
		printf("\nResult:FAIL");
	}	
}
