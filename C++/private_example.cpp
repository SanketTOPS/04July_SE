#include<iostream>
using namespace std;
class studinfo
{
	int id=101; //private
	
	public:
	void getID()
	{
		cout<<"\nID:"<<id;	
	}		
};
main()
{
	studinfo st;
	//st.id=101; //error
	st.getID();
	
	
}
