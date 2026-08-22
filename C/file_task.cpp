#include<stdio.h>
main()
{
	FILE *fl;
	int n,i,id;
	char name[20];
	fl=fopen("stdata.txt","a");
	printf("Enter number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter ID:");
		scanf("%d",&id);
		printf("Enter Name:");
		scanf("%s",&name);
		
		fprintf(fl,"ID:%d",id);
		fprintf(fl,"\nName:%s",name);
		fprintf(fl,"\n-----------\n");
	}
}

