#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct student
{
	char name[10];
	int id;
	char hostel[10];
};

int main()
{
	int n;
	cout<<" enter how many record you want to enter ";
	cin>>n;
	student obj[n];
	student *ptr;
	ptr=&obj[0];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the name of student =  ";
		cin>>obj[i].name;
		cout<<"enter id of the student = ";
		cin>>obj[i].id;
		cout<<"enter the name of the hostel = ";
		cin>>obj[i].hostel;
		
	}

cout<<" your all entered record";
cout<<"\n\n\n";
	for(int i=0;i<n;i++)
	{
		cout<<" name of student =  ";
	    cout<<*(ptr).name<<"\n";
		cout<<"id of the student = ";
		cout<<*ptr.id<<"\n";
		cout<<" name of the hostel = ";
		cout<<*ptr.hostel<<"\n";
		ptr+1;
		
	}
	
	return 0;
}
