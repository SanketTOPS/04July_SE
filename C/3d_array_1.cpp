#include<stdio.h>
main()
{
	int x[2][3][4]={
	{
		{1,2,3,4},{5,6,7,8},{9,10,11,12}
	},
	{
		{13,14,15,16},{17,18,19,20},{21,22,23,24}
	}
	};
	int l,i,j;
	for(l=0;l<2;l++)
	{
		printf("\nLayer:%d",l);
		for(i=0;i<3;i++)
		{
			printf("\n+---+---+---+---+\n");
			for(j=0;j<4;j++)
			{
				printf("|%d ",x[l][i][j]);
			}
			printf("\n");
		}
		printf("\n+---+---+---+---+\n");
	}
}
