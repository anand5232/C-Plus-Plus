#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct node
{
	int data;
	struct node *prev,*next;
}; 

struct node *start=NULL;

void insertNode()
{
	struct node *temp = new node;
	cout<<" \nenter the number ";
	cin>>temp->data;
	temp->prev=NULL;
	temp->next=NULL;
	if(start==NULL)
	{
		cout<<" list is empty";
		start=temp;
	}
	else
	{
		start->prev=temp;
	     temp->next=start;
	    start=temp;
	}
}
	
	void del()
	{
	   struct node *t;
	   t=start;
	   if(start==NULL)
	   {
	   	 cout<<" list is empty";
	   }
	   else
	   {
	    start=start->next;
	    start->prev=NULL;
	    free(t);
	   }
	}
	
	
	void view()
{
	if(start==NULL)
	{
		cout<<" list is empty please create a list to view the link list ";
	}
	else
	{
		struct node *t;
		t=start;
		while(t->next!=NULL)
		{
			cout<<t->data;
			t=t->next;
		}
	}
}


int menu()
{
	int n;
	cout<<" \t\t\t Dobule link list \t\t\t";
	cout<<"\n 1. create double link list";
	cout<<"\n 2. view the double link list";
	cout<<"\n 3. del the link list ";
	cout<<"\n 4. exit";
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
		
		case 4 :
			     exit(0);
			     break;
		default:
			     cout<<" enter the write key";
			     
    }
}
	 
}
