#include<conio.h>
#include<stdio.h>
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
void index(struct node *ptr,int ind)
{
	struct node *p;
	int count=0,check=-1;
	if(first==NULL)
	{
		printf("link List donot exist");
		return;
	}
	while(ptr!=NULL)
	{
		if(ind==count)
		{
			check=0;
			printf("\n[%d]= %d",count,ptr->data);
			return;
		}
		count++;
		ptr=ptr->next;
		
	}
	if(check==-1)
	{
		printf("\nGiven index is out of range....!");
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
	struct node *ptr=first;
	int count=0;
	printf("Index\n");
	while(ptr!=NULL)
	{
		index(first,count);
		count++;
		ptr=ptr->next;
	}
	return 0;
}
