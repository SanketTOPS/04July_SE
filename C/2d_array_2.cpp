#include<stdio.h>
main()
{
	int id[2][3]={{12,34,54},{2,4,6}},i,j;
	for(i=0;i<2;i++)
	{
		printf("+---+---+---+\n");
		for(j=0;j<3;j++)
		{
			printf("|%2d ",id[i][j]);
		}
		printf("\n");
	}
	printf("+---+---+---+");
	
}
