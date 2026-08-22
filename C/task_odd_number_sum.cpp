#include<stdio.h>
main()
{
	int i,sum=0;
	for(i=1;i<=100;i+=2)
	{
		sum=sum+i; //sum+=i
	}
	printf("\nSum:%d",sum);
}
