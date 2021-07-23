#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    }*first=NULL;
void create()
{
    struct node *last,*temp;
    int i=0,key,l;
    printf("\nEnter the length of Array You want: ");
    scanf("%d",&l);
    printf("\n[%d]Enter the element: ",i);
    scanf("%d",&key);
    first=(struct node *)malloc(sizeof(struct node));
    first->data=key;
    last=first;
    for(i=1;i<l;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\n[%d]Enter the element: ",i);
        scanf("%d",&key);
        temp->data=key;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }


}
void mx(struct node *ptr)
{
    int x=-1234;
    while(ptr!=NULL)
    {
        if(ptr->data>x)
        {
            x=ptr->data;
        }
        ptr=ptr->next;
    }
    printf("\nThe Maximum element in array: %d",x);

}
void mi(struct node *ptr)
{
    int i=1235;
    while(ptr!=NULL)
    {
        if(ptr->data<i)
        {
            i=ptr->data;
        }
        ptr=ptr->next;
    }
    printf("\nThe Minimum Element in Array is: %d",i);
}
int main()
{
    create();
    mx(first);
    mi(first);
    return 0;
}
