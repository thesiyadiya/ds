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
void addafter(int,int,node*);
void deleted(int,node*);

void main()
{
	p=NULL;
	clrscr();
	create(10,p);
	create(20,p);
	create(25,p);
	display(p);
	printf("\n");
	addbeg(5,p);
	display(p);
	printf("\n");
	addafter(3,22,p);
	display(p);
	printf("\n");
	deleted(20,p);
	display(p);
	getch();
}
void create(int ele,node *q)
{
	if(q==NULL)
	{
		p=(node*)malloc(sizeof(node));
		p->info=ele;
		p->next=p;
	}
	else
	{
		while(q->next!=p)
		{
			q=q->next;
		}
		q->next=(node*)malloc(sizeof(node));
		q->next->info=ele;
		q->next->next=p;
	}
}
void display(node *q)
{
	do
	{
		printf("\n Element is %d",q->info);
		q=q->next;
	}
	while(q!=p);
}
void addbeg(int ele,node *q)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->info=ele;
	temp->next=q;
	while(q->next!=p)
	{
		q=q->next;
	}
	q->next=temp;
	p=temp;
}
void addafter(int c,int ele,node *q)
{
	node *temp;
	int i;
	for(i=1;i<c;i++)
	{
		q=q->next;
		if(q==p)
		{
			printf("\n postion is out of range");
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
		do
		{
			q=q->next;
		}
		while(q->next!=p);
		q->next=p;
		p=p->next;
		return;
	}
	while(q->next->next!=p)
		{
			if(q->next->info==ele)
			{
				temp=q->next;
				q->next=temp->next;
				free(temp);
				return;
			}
			q=q->next;
		}
}
