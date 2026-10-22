#include<iostream>
using namespace std;
main()
{
	int n,i;
	cout<<"Enter number of students:";
	cin>>n;
	
	int id[n];
	string name[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter your ID:";
		cin>>id[i];
		cout<<"Enter your Name:";
		cin>>name[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"ID:"<<id[i];
		cout<<"\nName:"<<name[i];
		cout<<"\n------------\n";
	}
}
