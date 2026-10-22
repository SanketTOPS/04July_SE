#include<iostream>
using namespace std;
struct studinfo
{
	int id;
	string name,city;
}st;
main()
{
	cout<<"Enter an ID:";
	cin>>st.id;
	cout<<"Enter your Name:";
	cin>>st.name;
	cout<<"Enter your City:";
	cin>>st.city;
	
	cout<<"\nID:"<<st.id;
	cout<<"\nName:"<<st.name;
	cout<<"\nCity:"<<st.city;
}
