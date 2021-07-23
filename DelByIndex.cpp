#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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
		return;
	}
	while(ptr!=NULL)
	{
		follow=ptr;
		ptr=ptr->next;
	}
	follow->next=temp;	
}
void Del(struct node *ptr,int index)
{
	int count=0,check=-1;
	struct node *p;
	while(ptr!=NULL)
	{
		if(count==index)
		{
			check=0;
			if(index==0)
			{
				first=ptr->next;
				printf("\n{%d} %d has been deleted.....!\n",index,ptr->data);
				free(ptr);
				return;
			}
			else
			{
				printf("\n{%d} %d has been deleted.....!\n",index,ptr->data);
				p->next=ptr->next;
				free(ptr);
				return;
			}
		}
		p=ptr;
		ptr=ptr->next;
		count++;
	}
	if(check==-1)
	{
		printf("\nIndex is out of range!!!!!!!!!!");
	}
	
	p->next=ptr->next;
}
void Disp(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	insert(first,20);
	insert(first,21);
	insert(first,22);
	insert(first,23);
	insert(first,24);
	insert(first,25);
	insert(first,30);
	insert(first,31);
	insert(first,32);
	insert(first,33);
	insert(first,34);
	insert(first,35);
	insert(first,40);
	Disp(first);
	Del(first,0);
	Del(first,16);
	Disp(first);
	return 0;
}
