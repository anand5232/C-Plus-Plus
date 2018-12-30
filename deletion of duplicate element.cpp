#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout<<" enter the element in the array ";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<10;k++)
				a[k]=a[k+1];
			}
		}
	}
	
	int count=1;
	for(int i=0;i<10;i++)
	{
		if(a[i]!=0)
		{
			count++;
		}
	}
	for(int i=0;i<count;i++)
	{
		cout<<a[i];
	}
}
