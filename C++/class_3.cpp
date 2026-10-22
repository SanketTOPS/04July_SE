#include<iostream>
using namespace std;
class student
{
	int id;
	string name;
	
	public:
	void getdata()
	{
		cout<<"Enter your ID:";
		cin>>id;
		cout<<"Enter your Name:";
		cin>>name;
	}	
	void printdata()
	{
		cout<<"\nID:"<<id;
		cout<<"\nName:"<<name;
	}
};
main()
{
	student st;
	st.getdata();
	st.printdata();
}
