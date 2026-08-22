#include<stdio.h>
main()
{
	int a;
	long int b;
	float c;
	double d;
	long double e;
	char f;
	printf("Enter any Char. value:");
	scanf("%c",&f);
	printf("Enter any Int. value:");
	scanf("%d",&a);
	printf("Enter any Long Int. value:");
	scanf("%ld",&b);
	printf("Enter any Float value:");
	scanf("%f",&c);
	printf("Enter any Double value:");
	scanf("%lf",&d);
	printf("Enter any Long Double value:");
	scanf("%Lf",&e);
	
	
	printf("\nInt Value:%d",a);
	printf("\nLong Int Value:%ld",b);
	printf("\nFloat Value:%f",c);
	printf("\nDouble Value:%lf",d);
	printf("\nLong Double Value:%Lf",e);
	printf("\nChar. Value:%c",f);
}
