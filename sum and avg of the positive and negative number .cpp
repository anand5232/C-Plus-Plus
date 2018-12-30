#include<iostream>
using namespace std;

int main()
{
	int a[10],sum1=0,avg1=0,sum2=0,avg2=0;
	int count1=0,count2=0;
	cout<<" enter the 10 numbers ";
	for(int i=0;i<10;i++)
	 {
		cin>>a[i];
	 }
	
	
	for(int i=0;i<10;i++)
	 {
	 	
		  if(a[i]>0)
		  {
		  	sum1=sum1+a[i];
		  	count1++;
		  }
		  else
		  {
		  	sum2=sum2+a[i];
		  	count2++;
		  }
		
	  
}
	
	
	   avg1=sum1/count1;
	   avg2=sum2/(-count2);
 
     cout<<" \n average  of positive = ";
     cout<<avg1;
     cout<<" \n average of the negative number = ";
     cout<<avg2;
     return 0;
}



