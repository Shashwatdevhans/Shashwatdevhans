#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    }*first;
void create()
{
    struct node *temp,*last;
    int i=0,key,l;
    printf("\nEnter the Length of Array you want: ");
    scanf("%d",&l);
    printf("\n[%d]Enter the Element: ",i);
    scanf("%d",&key);
    first=(struct node *)malloc(sizeof(struct node));
    first->data=key;
    last=first;
    for(i=1;i<l;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\n[%d]Enter the Element: ",i);
        scanf("%d",&key);
        temp->data=key;
        temp->next=NULL;
        last->next=temp;
        last=temp;

    }
}
node * Search(struct node *ptr)
{
    int key,found=-1;
    printf("\nEnter the key to find: ");
    scanf("%d",&key);
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            found=0;
            break;
        }
        ptr=ptr->next;
    }

    (
    found==0)?printf("\nKey is found at address of : %d",ptr):printf("\nKey is not found!");
}
int main()
{
    create();
    Search(first);
    return 0;
}
