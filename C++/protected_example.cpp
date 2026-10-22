#include<iostream>
using namespace std;
class stdata
{
	protected:
	int id;
	
	public:
	void setId(int stid)	
	{
		id=stid;
	}
};
class child : public stdata
{
	public:
	void getId()
	{
		cout<<"\nID is:"<<id;
	}
};
main()
{
	child ch;
	ch.setId(45);
	ch.getId();
}
