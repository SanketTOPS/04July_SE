#include<iostream>
using namespace std;
main()
{
	FILE *file;
	char str[100];
	file=fopen("stdata.txt","r");
	fscanf(file,"%s",&str);
	cout<<str;
	
}
