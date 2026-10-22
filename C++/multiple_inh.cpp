#include<iostream>
using namespace std;
class sanket
{
	public:
	int sid;
	string stech;
	
	void s_getdata()
	{
		cout<<"Enter Sanket's ID:";
		cin>>sid;
		cout<<"Enter Sanket's Tech.:";
		cin>>stech;
	}
};
class ashok
{
	public:
	int aid;
	string atech;
	
	void a_getdata()
	{
		cout<<"Enter Ashok's ID:";
		cin>>aid;
		cout<<"Enter Ashok's Tech.:";
		cin>>atech;
	}
};
class gopal
{
	public:
	int gid;
	string gtech;
	
	void g_getdata()
	{
		cout<<"Enter Gopal's ID:";
		cin>>gid;
		cout<<"Enter Gopal's Tech.:";
		cin>>gtech;
	}
};
class tops : public sanket,public ashok,public gopal //Multiple Inhr.
{
	public:
	void printdata()
	{
		cout<<"\n-----Sanket's Info------";
		cout<<"\nSanket's ID:"<<sid;
		cout<<"\nSanket's Tech:"<<stech;
		cout<<"\n-----Ashok's Info------";
		cout<<"\nAshok's ID:"<<aid;
		cout<<"\nAshok's Tech:"<<atech;
		cout<<"\n-----Gopal's Info------";
		cout<<"\nGopal's ID:"<<gid;
		cout<<"\nGopal's Tech:"<<gtech;
	}
};
main()
{
	tops tp;
	tp.s_getdata();
	tp.a_getdata();
	tp.g_getdata();
	tp.printdata();
}
