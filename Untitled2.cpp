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
	for(int i=pos-1;i<n;i++)
	  {
		a[i+1]=a[i];	
	  }
	
	cout<<" \n enter the new element ";
	cin>>element;
	a[pos-1]=element;
	cout<<" inserted element is \n";
	for(int i=0;i<n+1;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
