#include<iostream>
using namespace std;
class master
{
	public:
	void header(string pname)
	{
		cout<<"\nPagename:"<<pname;
	}
	void footer(string pname)
	{
		cout<<"\nPagename:"<<pname;
	}
};
class home : public master
{
	public:
	void header(string pname)
	{
		cout<<"\nPagename:"<<pname;
	}
	void footer(string pname)
	{
		cout<<"\nPagename:"<<pname;
	}
};
class about : public master
{
	
	public:
	void header(string pname)
	{
		cout<<"\nPagename:"<<pname;
	}
	void footer(string pname)
	{
		cout<<"\nPagename:"<<pname;
	}
};
main()
{
	home h;
	about a;
	h.header("Home");
	h.footer("Home");
	a.header("About");
	a.footer("About");
}
