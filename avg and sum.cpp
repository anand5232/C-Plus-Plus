#include<iostream>
using namespace std;

int main()
{   int sum=0;
    float avg;
	int a[3][3];
	cout<<" enter the marks of the student";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			sum=sum+a[i][j];
		}
	}
	avg=sum/9;
	cout<<"\n avg = ";
	cout<<avg;
	return 0;

}
