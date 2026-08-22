#include<stdio.h>
main()
{
	int a=23;
	long int b=53434;
	float c=3.14;
	double d=4324.5234;
	long double e=54365366.5345;
	char f='w';
	char name[10]="Sanket";
	printf("\nSize of Int.:%d",sizeof(a));
	printf("\nSize of Long Int.:%d",sizeof(b));
	printf("\nSize of Float.:%d",sizeof(c));
	printf("\nSize of Double:%d",sizeof(d));
	printf("\nSize of Long Double.:%d",sizeof(e));
	printf("\nSize of Char.:%d",sizeof(f));
	printf("\nSize of String:%d",sizeof(name));
}
