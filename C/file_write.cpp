#include<stdio.h>
main()
{
	FILE *fl;
	fl=fopen("test.txt","w");
	fprintf(fl,"Good Evening!");
}
