#include <iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};
class LinkList
{
	private:
		node *first;
		node *follow;
	public:
		LinkList(){first=NULL;}
		LinkList(int x);
		~LinkList();
	
		Display();
//		void Insert();
//		int Delete(int index);
//		int Length();
};
LinkList::LinkList(int x)
{
	node *temp;
	temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(first==NULL)
	{
		follow=first=temp;
		return;
	}
	else
	{
		follow->next=temp;
		follow=temp;
			
	}
}
LinkList::~LinkList()
{
	node *p=first;
	while(first)
	{
		first=first->next;
		delete p;
		p=first;
	}
}
LinkList::Display()
{
	node *ptr=first;
	cout<<"\n$>> ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
int main()
{
	LinkList l(1);
	l.Display();
	return 0;
}














