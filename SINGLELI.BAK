#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next;
};
typedef struct list node;
node *p;
void create(int,node*);
void display(node*);
void addbeg(int,node*);
void display(node*);
void addafter(int,int,node*);
void deleted(int,node*);

void main()
{
	clrscr();
	p=NULL;
	create(10,p);
	create(20,p);
	create(5,p);
	display(p);
	printf("\n--------------------");
	addbeg(25,p);
	display(p);
	printf("\n-------------------");
	addafter(2,500,p);
	display(p);
	printf("\n---------------------");
	deleted(10,p);
	display(p);
	printf("\n-------------------");
	getch();
}
void create(int ele,node *q)
{
	if(q==NULL)
	{
		p=(node *)malloc(sizeof(node));
		p->info=ele;
		p->next=NULL;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=(node *)malloc(sizeof(node));
		q->next->info=ele;
		q->next->next=NULL;
	}
}
void display(node *q)
{
	while(q!=NULL)
	{
		printf("\n %d",q->info);
		q=q->next;
	}
}
void addbeg(int ele,node *q)
{
	p=(node *)malloc(sizeof(node));
	p->info=ele;
	p->next=q;
}
void addafter(int c,int ele,node *q)
{
	node *temp;
	int i;
	for(i=1;i<c;i++)
	{
		q=q->next;
		if(q==NULL)
		{
			printf("\nposition is out range");
			return;
		}
	}
	temp=(node *)malloc(sizeof(node));
	temp->info=ele;
	temp->next=q->next;
	q->next=temp;
}

void deleted(int ele,node *q)
{
	node *temp;
	if(q->info==ele)
	{
		p=q->next;
		free(q);
		return;
	}
	while(q->next->next!=NULL)
	{
		if(q->next->info==ele)
		{
			temp=q->next;
			q->next=q->next->next;
			free(temp);
			return;
		}
		q=q->next;
	}
}