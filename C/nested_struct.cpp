#include<stdio.h>
struct address
{
	int pin;
	char city[20];
};
struct studinfo
{
	int id;
	char name[20];
	struct address ad;
}st;
main()
{
	//struct studinfo st;
	printf("Enter your ID:");
	scanf("%d",&st.id);
	printf("Enter your Name:");
	scanf("%s",&st.name);
	printf("Enter your Pincode:");
	scanf("%d",&st.ad.pin);
	printf("Enter your City:");
	scanf("%s",&st.ad.city);
	
	printf("\nID:%d",st.id);
	printf("\nName:%s",st.name);
	printf("\nPin:%d",st.ad.pin);
	printf("\nCity:%s",st.ad.city);
	
}

