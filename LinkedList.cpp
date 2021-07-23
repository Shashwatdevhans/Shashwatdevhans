#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    }*first=NULL;

void create()
{
    struct node *temp ,*address;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=0;
    address=first;
    int i,key;
    for(i=1;i<5;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter the elements for [%d]: ",i);
        scanf("%d",&key);
        temp->data=key;
        temp->next=NULL;
        address->next=temp;
        address=temp;
    }

}
void disp(struct node *ptr)
{

    while(ptr!=NULL)
    {

        printf("\n %d",ptr->data);
        ptr=ptr->next;

    }
}
int main()
{
    create();
    disp(first);
    return 0;
}
