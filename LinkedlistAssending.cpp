#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*first=NULL;
void A_Sort(struct node *ptr,int x)
{
	struct node *follow=NULL,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(ptr==NULL)
	{
		first=temp;
	}
	else
	{
		while(ptr&&ptr->data>x)
		{
			follow=ptr;
			ptr=ptr->next;
		}
		if(follow==NULL)
		{
			temp->next=ptr;
			first=temp;
		}
		else
		{
			temp->next=ptr;
			follow->next=temp;
		}
	}
}

void D_Sort(struct node *ptr,int x)
{
	struct node *temp,*follow;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(ptr==NULL)
	{
		first=temp;
	}
	else
	{
		while(ptr&&ptr->data<x)
		{
			follow=ptr;
			ptr=ptr->next;
		}
		if(ptr==first)
		{
			temp->next=ptr;
			first=temp;
		}
		else
		{
			temp->next=ptr;
			follow->next=temp;
		}
	}
}
void Disp(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int main()
{
	A_Sort(first,21);
	A_Sort(first,20);
	A_Sort(first,10);
	A_Sort(first,12);
	A_Sort(first,92);
	Disp(first);
	return 0;
}
