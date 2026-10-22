#include<iostream>
using namespace std;
class studinfo
{
	public:
	int id; 
	
	void getID()
	{
		cout<<"\nID:"<<id;	
	}		
};
main()
{
	studinfo st;
	st.id=101; 
	st.getID();
}
