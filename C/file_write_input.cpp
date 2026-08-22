#include<stdio.h>
main()
{
	FILE *fl;
	int id;
	char name[20];
	fl=fopen("test.txt","w");
	printf("Enter your ID:");
	scanf("%d",&id);
	printf("Enter your Name:");
	scanf("%s",&name);
	
	fprintf(fl,"%d",id);
	fprintf(fl,"%s",name);
}
