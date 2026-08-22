#include<stdio.h>
struct studinfo
{
	int id;
	char name[20];
}st[10]; //Array of Strcuture
main()
{
	int n,i;
	printf("Enter number of Students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter your ID:");
		scanf("%d",&st[i].id);
		printf("Enter your Name:");
		scanf("%s",&st[i].name);
	}
	for(i=0;i<n;i++)
	{
		printf("\nID:%d",st[i].id);
		printf("\nName:%s",st[i].name);
	}
}
