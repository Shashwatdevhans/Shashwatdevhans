#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    }*first=NULL;
void create()
{
    int l,key,i=0;
    struct node *last,*temp;
    printf("\nEnter the length of Array:");
    scanf("%d",&l);
    printf("\n[%d]Enter the Element: ",i);
    scanf("%d",&key);
    first=(struct node *)malloc(sizeof(struct node));
    first->data=key;
    last=first;
    for(i=1;i<l;i++)
    {
        printf("\n[%d]Enter the Element: ",i);
        scanf("%d",&key);
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=key;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

}
void insert1st()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Element: ");
    scanf("%d",&temp->data);
    temp->next=first;
    first=temp;
}
void insertlast()
{
    struct node *temp,*ptr;
    ptr=first;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Element: ");
    scanf("%d",&temp->data);
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=NULL;

}
int main()
{
    create();
    insertlast();
    struct node *ptr;
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

    return 0;
}
