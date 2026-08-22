#include<stdio.h>
union stud
{
	int id;
	char name[20];
}st;
main()
{
	printf("Enter an ID:");
	scanf("%d",&st.id);
	printf("Enter your name:");
	scanf("%s",&st.name);
	
	printf("\nID:%d",st.id);
	printf("\nName:%s",st.name);
}
