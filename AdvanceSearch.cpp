#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    }*first=NULL;
void create()
{
    int l,key,i=0;
    struct node *last,*temp;
    printf("\nEnter the length of Array: ");
    scanf("%d",&l);
    printf("\n[%d]Enter your Elements: ",i);
    scanf("%d",&key);
    first=(struct node *)malloc(sizeof(struct node));
    first->data=key;
    last=first;
    for(i=1;i<l;i++)
    {
        printf("\n[%d]Enter your Elements: ",i);
        scanf("%d",&key);
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=key;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
node * Search(struct node *ptr)
{
    struct node *q;
    printf("\nEnter the key: ");
    int key,found=-1;
    scanf("%d",&key);
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            found=0;
            if(ptr==first)
            {
                break;
                //return ptr;
            }
            q->next=ptr->next;
            ptr->next=first;
            first=ptr;
            break;
            //return first;
        }
        q=ptr;//The following pointer is hear.
        ptr=ptr->next;
    }
    (found==0)?printf("\nKey is founded and now, it is a Head node!"):printf("\nKey is not found!");
}
void disp(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("\n%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    create();
    Search(first);
    disp(first);

    return 0;
}
