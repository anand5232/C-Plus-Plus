void deleteNode()
{
	struct node *r;
	if(start==null)
	{
		printf(" list is empty");
		
	}
	else
	 r=start;
	 start=start->link;
	 free(r);
	 
}
