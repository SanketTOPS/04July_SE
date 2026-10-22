#include<iostream>
using namespace std;
class getdata
{
	public:
	getdata(int id,string name)
	{
		cout<<"\nID:"<<id;
		cout<<"\nName:"<<name;
	}	
	~getdata() //destructor
	{
		cout<<"\nNow your memory is free!";
	}
};
main()
{
	getdata gt(101,"Sanket");
}
