#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *link;
}*start=NULL;

void insertNode()
{
	struct node *temp = new node;
	cout<<" enter the number \n ";
	cin>>temp->data;
	temp->link=NULL;
	if(start==NULL)
	{
		cout<<" list is empty and node is added to start";
		start=temp;
	}
	else
    {    struct node *t;
         cout<<"\n list is not empty and node will be added to last";
         t=start;
         while(t->link!=NULL)
         {
         	t=t->link;
		 }
		 t->link=temp;
    }
}


void del()
{
	struct node *t;
	t=start;
	start=start->link;
	free(t);
}


void view()
{
	struct node *t;
	t=start;
	if(start==NULL)
	{
		cout<<" list is empty";
	}
	else
	{
		while(t!=NULL)
		{
			cout<<t->data;
			cout<<"\n";
			t=t->link;
		}
	}
}

int menu()
{
	int n;
	cout<<"\n 1. create list ";
	cout<<"\n 2. view the list";
	cout<<"\n 3. delete the first element of the link list";
	cout<<"\n 4. you want to exit ";
	cout<<"\n\n\n   enter your choice ";
	cin>>n;
	return n;
}


int main()
{
    while(1)	
	{
	 switch(menu())
	  {
		case 1:
			    insertNode();
			    break;
		case 2:
			    view();
			    break;
		case 3:
			    del();
			    break;
		case 4:
			    exit(0);
		default:
			    cout<<" enter the right key ...";
			    
	  }
    }  
    
    return 0;
}
