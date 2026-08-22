#include<stdio.h>
main()
{
	int i=1;
	
	sanket: //label
	printf("%d\n",i);
	i++;
	
	if(i<=10)
	{
		goto sanket;
	}
}
