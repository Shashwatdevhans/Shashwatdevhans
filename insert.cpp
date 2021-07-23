#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*first=NULL;
void insert(struct node *ptr,int x)
{
	struct node *temp,*follow;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		return ;
	}
	else
	{
		while(ptr!=NULL)
		{
			follow=ptr;
			ptr=ptr->next;
		}
		follow->next=temp;
	}
	
}
int main()
{
	insert(first,14);
	insert(first,10);
	insert(first,50);
	insert(first,70);
	insert(first,8);
	struct node *ptr=first;
	while(ptr!=NULL)
	{
		printf("\n%d ",ptr->data);
		ptr=ptr->next;
	}
	return 0;
}
