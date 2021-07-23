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
void Disp(struct node *ptr)
{
	printf("\n$>>");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
void reverse(struct node *lead)
{
	struct node *hold,*update=NULL;
	while(lead!=NULL)
	{
		hold=update;
		update=lead;
		lead=lead->next;
		update->next=hold;	
	}
	first=update;
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
	reverse(first);
	Disp(first);

	return 0;
}
