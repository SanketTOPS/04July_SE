#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file("new.txt");
	int id;
	string name;
	cout<<"Enter your ID:";
	cin>>id;
	cout<<"Enter your Name:";
	cin>>name;
	file<<"ID:"<<id;
	file<<"\nName:"<<name;
}
