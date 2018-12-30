#include<iostream>
using namespace std;
int main()
{
	int a[5],n,element;
	cout<<" enter the element in the array";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<" enter the position of the element you want to delete";
    cin>>n;
    for(int i=n-1;i<5;i++)
    {
    	a[i]=a[i+1];
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<a[i];
	}
}
