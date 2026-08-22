#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
		printf("%d\n",sum);
	}
	
	printf("\n----------\nSum:%d",sum);
}
