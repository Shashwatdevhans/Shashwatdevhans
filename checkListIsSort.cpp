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
		return;
	}
	else
	{
		while(ptr!=NULL)
		{
			follow=ptr;
			ptr=ptr->next;//while ptr==NULL the follow is still on the prt node and hance follow will update and ptr will stop at NULL position
		}
		follow->next=temp;
		
	}
}
void Disp(struct node *ptr)
{
	printf("\n$>>");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
void Check(struct node *ptr)
{
	struct node *follow=ptr;
	int count=1;
	if(first==NULL)
	{
		printf("\n$>>List is Empty!!!!");
		return;
	}
	while(ptr!=NULL)
	{
		if(follow->data<ptr->data)
		{
			count++;
		}
		else
		{ 
			if(count!=1)
			{
				printf("\n$>>UNsorted List");
				return;
			}
		}
		follow=ptr;
		ptr=ptr->next;
	}
	if(count==1)
	{
		printf("\n$>>There is only one element in link list");
	}
	else
	{
		printf("\n$>>List is sorted by Assending order.");
	}
	
}
int main()
{
	int i,key,length;
	printf("\n$>>Enter the length of Array: ");
	scanf("%d",&length);
	printf("\n$>>Enter the values: ");
	for(i=0;i<length;i++)
	{
		printf("\n$>> ");
		scanf("%d",&key);
		insert(first,key);
	}
	Check(first);
	Disp(first);
	
	
	return 0;
}
