#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
typedef struct node Node;
void create()
{
	char a;
	do
	{
	Node *current,*new_node;
	new_node=(Node*)malloc(sizeof(Node*));
	printf("\nEnter the data");
	scanf("%d",&new_node->data);
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else{
	current->next=new_node;
	current=new_node;
	}
	printf("\nDo you want to add an element?");
	a=getche();
      }while(a!='n');
}
void display()
{
	Node *newnode;
	newnode=(Node*)malloc(sizeof(Node*));
	newnode=start;
	while(newnode!=NULL)
	{
		printf("%d-->",newnode->data);
		newnode=newnode->next;
	}
	printf("NULL");
}
void search()
{
	int n,pos,i;
	Node *t,*p;
	t=(Node*)malloc(sizeof(Node*));
	t=start;
	p=start;
	printf("\nEnter the position:");
	scanf("%d",&pos);





     for(i=0;i<pos;i++)
     {
	t=t->next;
     }
     while(t->next!=NULL)
     {
	t=t->next;
	p=p->next;
     }
     printf("\nThe %d element from the end is %d",pos,p->next->data);
     getch();
  }
  void main()
  {
	create();
	display();
	search();
  }
