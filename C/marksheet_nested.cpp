#include<stdio.h>
main()
{
	int s1,s2,s3,s4,total;
	float pr;
	printf("Enter Subject1 Mark:");
	scanf("%d",&s1);
	printf("Enter Subject2 Mark:");
	scanf("%d",&s2);
	printf("Enter Subject3 Mark:");
	scanf("%d",&s3);
	printf("Enter Subject4 Mark:");
	scanf("%d",&s4);
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40) //parent
	{
		total=s1+s2+s3+s4;
		pr=total/4;
		
		printf("\nTotal:%d",total);
		printf("\nPR:%f",pr);
		
		if(pr>=70) //child
		{
			printf("\nResult:Dist.");
		}
		else if(pr>=60) //child
		{
			printf("\nResult:First Class");
		}
		else if(pr>=50) //child
		{
			printf("\nResult:Second Class");
		}
		else if(pr>=40) //child
		{
			printf("\nResult:Pass Class");
		}
		
	}
	else
	{
		printf("\nResult:FAIL");
	}
}
