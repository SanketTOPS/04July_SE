#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter any value:";
	cin>>n;
	if(n>0)
	{
		cout<<"Number is +ve.";
	}
	else if(n<0)
	{
		cout<<"Number is -ve.";
	}
	else
	{
		cout<<"Number is ZERO";
	}
}
