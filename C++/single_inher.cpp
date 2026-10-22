#include<iostream>
using namespace std;
class student
{
	public:
	int id;
	string name;
	
	void getdata()
	{
		cout<<"Enter your ID:";
		cin>>id;
		cout<<"Enter your Name:";
		cin>>name;
	}
};
class display : public student //single inher.
{
	public:
	void printdata()
	{
		cout<<"\nID:"<<id;
		cout<<"\nName:"<<name;
	}
};
main()
{
	display ds;
	ds.getdata();
	ds.printdata();
}
