//link list

struct node
{
	int info;
	struct node *link;
} *start=NULL;

void beginlist(int n)
{
	struct node *temp = new node;
	temp->info=n;
	temp->link=start;
	start=temp;
	
}


void append(int n)
{
	struct node *ptr=start;
	struct node *temp=new node;
	temp->info=n;
	temp->link=null;
	if(start==null)
	{
		start=temp;
	}
	else
	{
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
	}
	
	
}

void display
{
	struct node ptr;
	while(ptr->link!='NUll')
	{
		cout<<ptr->info;
		
	}
 } 

int main()
{
	beginlist(10);
	beginlist(20);
	append(15);
	append(25);
}

// to delete link list

void del()
{
	if(start==null)
	{
		cout<<"underflow";
		 return ;
	}
	struct node *temp = start;
	start=start->link;
	delete temp; || free(temp);
}
