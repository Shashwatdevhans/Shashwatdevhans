#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
}*first=NULL;
void SortInsert(struct node *ptr, int x)
{
    struct node *temp,*follow=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(first==NULL)
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
            temp->next=first;
            first=temp;

        }
        else
        {
            temp->next=follow->next;
            follow->next=temp;
        }


    }
}
int main()
{
    SortInsert(first,15);
    SortInsert(first,25);
    SortInsert(first,45);
    SortInsert(first,75);
    SortInsert(first,65);
    SortInsert(first,50);
    SortInsert(first,5);
    struct node *p=first;
    while(p!=NULL)
    {
        printf("\n%d ",p->data);
        p=p->next;
    }
    return 0;
}
