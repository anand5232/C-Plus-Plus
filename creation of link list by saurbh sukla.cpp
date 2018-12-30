#include<stdio.h>
struct node
{
	int info;
	struct node *link;
} struct node *START=NULL;

struct node* createNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return(n);
}

void insertNOde()
{
	struct node *temp,*n;
	temp=createNode();
	printf("enter the number");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(START==NULL)   // if the linklist is empty start will be = NULL
	{
		START=temp;
	}
	else             // if the linklist is not empty then we are adding new node at the end 
	{
		t=START;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp
	}
}
