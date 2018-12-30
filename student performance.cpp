#include<iostream>
using namespace std;

struct student
{
	string name[5];
	int mark1[5],mark2[5],mark3[5];
	
};


int main()
{
	int sum[5];
	float per[5];
	
	struct student a[5];
	for(int i=0;i<=5;i++)
	{
		
		cout<<" enter the name of the student \n";
		cin>>a[i].name[i];
		cout<<" enter the mark of first subject \n";
		cin>>a[i].mark1[i];
		cout<<" enter the mark of the second subject \n";
		cin>>a[i].mark2[i];
		cout<<" enter the mark of the third subject \n";
		cin>>a[i].mark3[i];
		sum[i]=a[i].mark1[i]+a[i].mark2[i]+a[i].mark3[i];
		per[i]=(sum[i]/300)*100;
		cout<<"\n\n\n";
		
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<" name of student  =  ";
		cout<<a[i].name;
		cout<<"\n total marks = ";
		cout<<sum[i];
		cout<<"\n Percent = ";
		cout<<per[i];
		cout<<"\n \n \n ";
	}
return 0;
}
	
