#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,sum,avg;
	cout<<"enter how many number you want to enter ";
	cin>>n;
	int number[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<"  number  ";
		cin>>number[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+number[i];
	}
	
	avg=sum/n;
	cout<<"sum =   "<<sum<<"\n";
	cout<<"avg =   "<<avg;
	
} 
