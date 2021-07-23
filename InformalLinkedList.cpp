#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first;
void create()
{
    struct node *second;
    struct node *third;

    first=(struct node *)malloc(sizeof(struct node));
    first->data=0;

    second=(struct node *)malloc(sizeof(struct node));
    first->next=second;
    second->data=3;

    third=(struct node *)malloc(sizeof(struct node));
    second->next=third;
    third->data=23;
    third->next=NULL;

}
void Display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

}
int main()
{
    create();
    Display(first);

    return 0;
}
