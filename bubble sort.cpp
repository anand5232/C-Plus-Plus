#include<iostream>
using namespace std;
int main()
{
	int a[20],n;
	cout<<" enter the size of the array \n ";
	cin>>n;
	cout<<"\n enter the element of the array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<(n-i-1);j++)
			    {
			    	if(a[j]>a[j+1])
			    	{
			    		int temp;
			    		temp=a[j];
			    		a[j]=a[j+1];
			    		a[j+1]=temp;
			    		
					}
				}
		}
	
	cout<<" \n sorted element of the array  \n ";
	 for(int i=0;i<n;i++)
	 {
	 	cout<<a[i];
	 }
	 
	 return 0;
}
