#include<conio.h>
#include<stdio.h>
int front=-1,rear=-1;
int size=5;
int queue[5];
void insert(int);
void deleted();
void display();
void main()
{
	clrscr();
	insert(12);
	insert(55);
	insert(99);
	display();
	printf("\n--------------------------");
	deleted();
	deleted();
	display();
	getch();
}
void insert(int ele)
{
	if(front==0 && rear==size-1)
	printf("\n queue is full");
	else if(front==-1)
	{
		front=rear=0;
		queue[rear]=ele;
	}
	else if(rear==size-1)
	{
		rear=0;
		queue[rear]=ele;
	}
	else
	{
		rear++;
		queue[rear]=ele;
	}
}
void deleted()
{
	if(front==-1)
		printf("\n Queue is empty");
	else if(front==rear)
		front=rear=-1;
	else if(front==size)
		front=0;
	else
		front++;
}
void display()
{
	int i;
	if(front==-1)
		printf("\n Queue is empty");
	else if(front>rear)
	{
		for(i=0;i<=rear;i++)
		{
			printf("\n Element at %d is %d",i,queue[i]);
		}
		for(i=front;i<=size-1;i++)
		{
			printf("\n Element at %d is %d",i,queue[i]);
		}
	}
	else
	{
	    for(i=front;i<=rear;i++)
	    {
		printf("\n Element at %d is %d",i,queue[i]);
	    }
	}
}















