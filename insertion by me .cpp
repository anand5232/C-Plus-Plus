#include<iostream>
using namespace std;

int main()
{
	int a[10],pos,n,element;
	cout<<" enter the size of the array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	
	cout<<" enter the position ";
	cin>>pos;
	int b=pos;
	int c=n-pos;
	for(int i=pos-1;i<c;i++)
	  {
		a[i+1]=a[i];	
	  }
	
	cout<<" \n enter the new element ";
	cin>>element;
	a[pos-1]=element;
	cout<<" inserted element is \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"\n";
		if(i==n)
		{
			n++;
		}
	}
	
	return 0;
}
