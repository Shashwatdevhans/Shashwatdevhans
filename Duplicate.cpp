#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*first;
void insert(struct node *ptr,int x)
{
	struct node *temp,*follow=ptr;
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
void Duplicat(struct node *ptr)
{
	struct node *follow=NULL,*lead,*hold;
	int count=0;
	while(ptr!=NULL)
	{
		lead=ptr->next;
		hold=ptr; //hold will initiate again ;
		while(lead!=NULL)
		{
			follow=lead;
			if(lead->data==ptr->data)
			{
				count++;
				printf("\n{%d}Found Duplication of >> %d",count,ptr->data);
				lead=lead->next;
				hold->next=lead;
				free(follow);	
			}
			else
			{
				lead=lead->next;
				hold=follow;	
			}
		}
		ptr=ptr->next;	
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
	Disp(first);
	Duplicat(first);
	Disp(first);
	return 0;
}
