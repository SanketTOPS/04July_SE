#include<stdio.h>
int input(int a,int b)
{
	return a+b;
}
void answer()
{
	int ans;
	ans=input(23,54);
	printf("\nSum:%d",ans);
}
main()
{
	answer();
}
