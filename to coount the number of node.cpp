#include<iostream>
using namespace std;

struct node
{
	int info;
	struct node *link;
} ;


void begin(int n)
{
	struct node *temp = new node;
	temp->info=n;
	temp->link=start;
	start=temp;
}

void count(node *p)
{
	int count=0;
     struct node *ptr;
     ptr=p;
	while(*ptr->link!=NULL)
	{
		count++;
		ptr=ptr->link;
	}
	return count;
}

int main()
{
	struct node *start=NULL;
	begin(12);
	begin(13);
	begin(14);
 r=count(start)
cout<<" total number of nodes created is  = "<<r;
return 0;
	
}
