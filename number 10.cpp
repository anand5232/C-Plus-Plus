#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,even[10];
	cout<<"enter the 10 numbers ";
	for(int i=0;i<=10;i++)
	{
		cin>>even[i];
		cout<<"\n";
		
	}
	for(int i=0;i<=10;i++)
	{
		if(even[i]%2==0)
		{
			cout<<even[i]<<"\n";
		}
	}
	
	return 0;
	
}
	
	
	

