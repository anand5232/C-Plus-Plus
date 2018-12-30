#include<iostream>
using namespace std;
int main()

{
	int num[10],pos=0,nag=0,avg1=0,avg2=0,sum1=0,sum2=0;
	cout<<"enter 10 number any negative or positive";
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
		
	}
	for(int i=0;i<10;i++)
	{
		if(num[i]>0)
		{   
		    sum1=sum1+num[i];
			pos++;
		}
		else
		{
			sum2=sum2+num[i];
			nag++;
		}
		
	}
	avg1=sum1/pos;
	avg2=sum2/nag;
	
	cout<<" avg of positive number = "<<avg1<<"\n";
	cout<<" avg of negative number = "<<avg2;
	
	return 0;
}
	
	

