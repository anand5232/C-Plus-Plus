#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],c[10];
	cout<<" enter the element in first array \n ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		c[i]=a[i];
		cout<<"\n";
	}
	cout<<" enter the second array element \n";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
		c[i+5]=b[i];
		cout<<"\n";
	}
	
	cout<<" merge array is given below ";
	for(int i=0;i<10;i++)
	{
		cout<<c[i];
		cout<<"\n";
		
	}
	
	
}
