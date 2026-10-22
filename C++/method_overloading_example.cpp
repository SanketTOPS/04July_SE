#include<iostream>
using namespace std;
class studinfo
{
	//Method Overloading
	public:
	void getdata(int id)	
	{
		cout<<"ID:"<<id;
	}
	void getdata(int name)
	{
		cout<<"\nName:"<<name;
	}
};
main()
{
	studinfo st;
	int stid;
	string stnm;
	cout<<"Enter an ID:";
	cin>>stid;
	cout<<"Enter a Name:";
	cin>>stnm;
	st.getdata(stid);
	st.getdata(stnm);
	//st.getdata(101);
	//st.getdata("Sanket");
	
}
