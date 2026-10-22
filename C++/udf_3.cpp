#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Sum:"<<a+b;
}
void sub(int a,int b)
{
	cout<<"Sub:"<<a-b;
}
void mul(int a,int b)
{
	cout<<"Mul:"<<a*b;
}
main()
{
	int choice;
	cout<<"-------Select your Oper.-------";
	cout<<"\n1:Add";
	cout<<"\n2:Sub";
	cout<<"\n3:Mul";
	cout<<"\n--------------";
	cout<<"\nEnter your choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		add(23,54);
		break;
		
		case 2:
		sub(93,54);
		break;
		
		case 3:
		mul(12,45);
		break;
		
		default:
		cout<<"Error!Invalid choice...";
		break;
	}
}

