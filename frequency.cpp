#include<iostream>
using namespace std;
int main()
{
	int a[10],freq[10],n,count=1;
	cout<<" enter how many element you want to enter ";
	cin>>n;
	cout<<"\n now enter all the element ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				
			}
			
			freq[n]=0;
		}
		if(count!=0)
		{
		   freq[i]=count;
	    }
	}
	for(int i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
			cout<<a[i];
			cout<<" repeated";
			cout<<freq[i];
			cout<<"times";
			cout<<"\n";
		}
	}
	
}
