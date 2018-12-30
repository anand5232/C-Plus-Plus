#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	struct student
	{
		char name[30];
		int  total;
	} a;
	
	cout<<"enter the name of the student   ";
	cin>>a.name;
	cout<<"enter the total marks of student  ";
	cin>>a.total;
	cout<<" name =  ";
	cout<<a.name<<"\n";
	cout<<"totoal marks = ";
	cout<<a.total;
	
	return 0;
}

