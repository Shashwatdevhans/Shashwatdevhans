#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first;
void create()
{
    struct node *last,*temp;
    int i=0,l,key;
    printf("\nEnter the length of Array: ");
    scanf("%d",&l);
    first=(struct node *)malloc(sizeof(struct node));
    printf("\n[%d]Enter the value: ",i);
    scanf("%d",&key);
    first->data=key;
    //now Duplicate the first with temporary struct node pointer last
    last=first;
    for(i=1;i<l;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\n[%d]Enter the value: ",i);
        scanf("%d",&key);
        //initiate the node
        temp->data=key;
        temp->next=NULL;
        //now link the previous node with current allocation temp
        last->next=temp;
        //now again the duplicate the current allocated temp with temporary struct node pointer last;
        last=temp;
    }


}

void add(struct node *ptr)
{
    int ans=0;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ans=ans+ptr->data;
        ptr=ptr->next;
    }
    printf("\nSum of your array elements: %d",ans);
}
int main()
{
    create();
    add(first);
    return 0;
}
