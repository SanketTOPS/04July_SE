#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream file("new.txt");
	string str;
	while(getline(file,str))
	{
		cout<<str<<"\n";
	}
	
	
	
}
