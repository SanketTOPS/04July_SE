#include<stdio.h>
struct studinfo
{
	int id;
	char name[20];
}st,st1;
main()
{
	printf("Enter an ID:");
	scanf("%d",&st.id);
	printf("Enter a Name:");
	scanf("%s",&st.name);
	
	printf("\nID:%d",st.id);
	printf("\nName:%s",st.name);
	
	printf("\nEnter an ID:");
	scanf("%d",&st1.id);
	printf("Enter a Name:");
	scanf("%s",&st1.name);
	
	printf("\nID:%d",st1.id);
	printf("\nName:%s",st1.name);
}
