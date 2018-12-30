#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<" \n enter how many record you want to enter ";
 cin>>n;
 int *p = new int[n];
 cout<<" \n\n enter the record";
 for(int i=0;i<n;i++)
 {
 	cin>>p[i];
 	cout<<"\n";
 }
 
 cout<<"\n records that you entered is ";
 for(int i=0;i<n;i++)
 {
 	cout<<p[i];
 	cout<<"\n";
 	
 }
 
 delete[] p;

	
	
	
}
