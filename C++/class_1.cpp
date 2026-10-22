#include<iostream>
using namespace std;
class student
{
	int id;
	string name;
	
	public:
	void getdata()
	{
		id=101;
		name="Sanket";
		cout<<"ID:"<<id;
		cout<<"\nName:"<<name;
	}
};
main()
{
	student st; //object
	st.getdata();
}
