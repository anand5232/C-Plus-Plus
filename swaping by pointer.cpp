#include<iostream>
using namespace std;

void swap(int*,int*);
int main()
{
	int *p,*q,a,b,temp;
	p=&a;
	q=&b;
	cout<<"enter two numbers ";
	cin>>a>>b;
	swap(p,q);
	cout<<"interchanged number are "<<"\n";
	cout<<a<<"\n"<<b;
	return 0;
	
	
	
	
}

void swap (int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
