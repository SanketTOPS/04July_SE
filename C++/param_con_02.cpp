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
};
main()
{
	//getdata gt(101,"Sanket");
	int stid;
	string stnm;
	cout<<"Enter an ID:";
	cin>>stid;
	cout<<"Enter a Name:";
	cin>>stnm;
	getdata gt(stid,stnm);
}
