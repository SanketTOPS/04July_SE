#include<iostream>
using namespace std;
main()
{
	FILE *file;
	int id;
	char name[10];
	file=fopen("stdata.txt","w");
	cout<<"Enter an ID:";
	cin>>id;
	cout<<"Enter a Name:";
	cin>>name;
	fprintf(file,"%d",id);
	fprintf(file,"%s",name);
	
}
