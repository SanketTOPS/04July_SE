#include<stdio.h>
main()
{
	int id[5] n,i;
	printf("Enter number of ID:");
	scanf("%d",&n);
	//int id[n];
	for(i=0;i<n;i++)
	{
		printf("Enter your ID:");
		scanf("%d",&id[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nID:%d",id[i]);
	}
	
}
