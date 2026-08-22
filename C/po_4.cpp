#include<stdio.h>
main()
{
	int x=10;
	printf("X:%d",x);
	printf("\nAddress of X:%d",&x);
	x++;
	printf("\nX:%d",x);
	printf("\nAddress of X:%d",&x);
}
