#include<conio.h>
#include<stdio.h>
#define size 5
int queue[size];
int front=-1,rear=-1;
void enq();
void disp();
void main()
{
	int i,a;
	clrscr();
	for(i=1;i<4;i++)
	{
		prinf("\n enter value");
		scanf("%d",&a);
		enq(a);
	}
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
			queue[rear]=ele;
		}
		else
		{
			rear++;
			queue[rear]=ele;
		}
	}
}
void disp()
{
	int i;
	if(rear>=1)
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