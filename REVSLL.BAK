#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *head;
void createlist();
void reverselist();
void displaylist();
void main()
{
	clrscr();
	createlist();
	printf("\n Data in the list \n");
	displaylist();
	reverselist();
	printf("\n Data in the list \n");
	displaylist();
}
void createlist()
{
	struct node *newnode , *temp;
	int data,i;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data of node 1:");
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	temp=head;
	for(i=2;i<=4;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the day of node %d:",i);
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
	printf("singly linked list ctreate succsefuly \n");
}
void reverselist()
{
	struct node *prevnode, *curnode;
	if(head!=NULL)
	{
		prevnode=head;
		curnode=head->next;
		head=head->next;
		prevnode->next=NULL;
		while(head!=NULL)
		{
			head=head->next;
			curnode->next=prevnode;
			prevnode=curnode;
			curnode=head;
		}
		head=prevnode;
		printf("successfully reversed list \n");
	}
}
void displaylist()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("data=%d\n",temp->data);
			temp=temp->next;
		}
	}
	getch();
}