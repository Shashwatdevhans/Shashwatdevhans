#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    }*first=NULL,*last=NULL;
int Count(struct node *ptr)
{
    int i=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        i++;
    }
    return i;
}

void indexInsert(struct node *ptr,int index,int x)
{
    if(index<0||index>Count(first))
    {
        return;
    }
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(ptr==NULL)
    {
        first=temp;
        return;
    }
    if(index==0)
    {
        temp->next=first;
        first=temp;
    }
    else
    {
        int i;
        for(i=0;i<index-1;i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;

    }

}
void Insert(int x)
{
    int i;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(first==NULL)
    {
        first=last=temp;
    }
    else
    {
        last->next=temp;
        last=temp;

    }
}
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("\n%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    Insert(14);
    Insert(15);
    Insert(16);
    Insert(14);
    indexInsert(first,2,21);
    display(first);
    printf("\nCount:- %d",Count(first));
    return 0;
}
