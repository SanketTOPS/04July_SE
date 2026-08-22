#include<stdio.h>
main()
{
	int n,i;
	printf("Enter number of students:");
	scanf("%d",&n);
	int id[n];
	char name[n][10];
	for(i=0;i<n;i++)
	{
		printf("Enter an ID:");
		scanf("%d",&id[i]);
		printf("Enter your Name:");
		scanf("%s",&name[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nID:%d",id[i]);
		printf("\nName:%s",name[i]);
		printf("\n-----------\n");
	}
	
}
