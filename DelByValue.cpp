#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
}*first;
void create(struct node *ptr,int x)
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
void del(struct node *ptr,int x)
{
	struct node *follow,*hold;
	int count=0;
	while(ptr!=NULL)
	{
		if(ptr->data==x)
		{
			if(count==0)
			{
				first=NULL;
				free(ptr);
				return;
			}
			follow->next=ptr->next;
			free(ptr);
			return;
		}
		follow=ptr;
		ptr=ptr->next;
		count++;
	}
}
void Display(struct node *ptr)
{
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	create(first,14);
	create(first,15);
	create(first,16);
	Display(first);
	del(first,16);
	Display(first);
	del(first,15);
	Display(first);
	return 0;
}
