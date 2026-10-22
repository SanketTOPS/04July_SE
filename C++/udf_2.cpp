#include<iostream>
using namespace std;
int a,b;
void getnumber()
{
	cout<<"Enter number1 and number2:";
	cin>>a>>b;
}
void add()
{
	cout<<"\nSum:"<<a+b;
}
void sub()
{
	cout<<"\nSub:"<<a-b;
}
void mul()
{
	cout<<"\nMul:"<<a*b;
}
main()
{
	getnumber();
	add();
	sub();
	mul();
}
