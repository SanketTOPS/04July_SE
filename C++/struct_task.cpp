#include<iostream>
using namespace std;
struct studinfo
{
	int id;
	string name,city;	
};
void getdata()
{
	int i,n;
	cout<<"Enter number of students:";
	cin>>n;
	studinfo st[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter an ID:";
		cin>>st[i].id;
		cout<<"Enter a Name:";
		cin>>st[i].name;
		cout<<"Enter a City:";
		cin>>st[i].city;
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n------Student's Info.-------";
		cout<<"\nID:"<<st[i].id;
		cout<<"\nName:"<<st[i].name;
		cout<<"\nCity:"<<st[i].city;
		cout<<"\n-*-*-*-*-*-*-*-*-";
	}
}
main()
{
	getdata();
}
