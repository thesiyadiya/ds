#include<conio.h>
#include<stdio.h>
int queue[10];
int front=-1,rear=-1;
void enq(int);
void dq();
void disp();
void main()
{
	clrscr();
	enq(100);
	enq(20);
	enq(600);
	disp();
	printf("\n--------\n");
	dq();
	disp();
	getch();
}
void enq(int a)
{
	if(rear>=9)
	{
		printf("\n queue is full");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear++;
			queue[rear]=a;
		}
		else
		{
			rear++;
			queue[rear]=a;
		}
	}
}
void disp()
{
	int i;
	if(rear>-1)
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
	else
	{
		printf("\n queue is empty");
	}
}
void dq()
{
	if(rear<0)
	{
		printf("\n queue is empty");
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}