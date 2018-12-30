#include<iostream>
using namespace std;
int main()
{
	int a[3][3],sum=0, avg;
	cout<<"enter the number ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	
	avg=sum/9;
	
	cout<<" sum =  "<<sum<<"\n";
	cout<<" average =  "<<avg;
	return 0;
}
