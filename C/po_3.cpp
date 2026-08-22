#include<stdio.h>
main()
{
	int id[5]={12,45,6,87,9};
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nID:%d",id[i]);
		printf("\nAddress of ID:%d",&id[i]);
	}
}
