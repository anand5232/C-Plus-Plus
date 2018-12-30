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
			if(a[i]>a[j])
			{
			 int temp;
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
		    }
		}
	}
	
	cout<<"\n sorted elements are \n";
	for(int i=0;i<10;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
	
	return 0;
}
