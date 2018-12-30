#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b,*a1,*b1;
	a1=&a;
	b1=&b;
	cout<<" enter the number ";
	cin>>a;
	cout<<"\n enter the second number ";
	cin>>b;
	cout<<" before exchange the values of a and b";
	cout<<"\n";
	cout<<" A = ";
	cout<<a;
	cout<<"\n B = ";
	cout<<b;
	swap(a1,b1);
	cout<<"\n after swaping";
	cout<<" value of A = ";
	cout<<a;
	cout<<"\n value of B = ";
	cout<<b;
	return 0;
	
	
}

void swap(int *a, int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	
}


