#include<stdio.h>
#include<string.h>
main()
{
	char fnm[10],lnm[10];
	printf("Enter Firstname:");
	scanf("%s",&fnm);
	printf("Enter Lastname:");
	scanf("%s",&lnm);
	printf("\nFullname:%s",strcat(fnm,lnm));

}
