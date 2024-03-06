#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display(struct node *head)
{
	if(head!=NULL)
	{
		printf("\n ELements after merging is: ");
		printf("%d \n",head->data);
		display(head->next);
	}
}
void concatenate(struct node *a,struct node *b)
{
	if(a!=NULL && b!=NULL)
	{
		if(a->next==NULL)
			a->next=b;
		else
			concatenate(a->next,b);
	}
	else
	{
		printf("either a or b is NULL \n");
	}
}
void main()
{
	struct node *prev,*a,*p,*b;
	int n,i;
	clrscr();
	printf("\n enter number of elements in a: ");
	scanf("%d",&n);
	printf("\n enter %d element: ",n);
	a=NULL;
	for(i=0;i<n;i++)
	{
		p=(node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		if(a==NULL)
			a=p;
		else
			prev->next=p;
			prev=p;
	}
	printf("\n enter number of element in b: ");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
	b=NULL;
	for(i=0;i<n;i++)
	{
		p=(node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		if(b==NULL)
			b=p;
		else
			prev->next=p;
			prev=p;
	}
	concatenate(a,b);
	display(a);
	getch();
}