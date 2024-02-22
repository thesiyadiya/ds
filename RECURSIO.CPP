#include<stdio.h>
#include<conio.h>
int stack[10];
int top=-1;
void push(int);
int pop();
void disp();
void reverse();
void insertAtBt(int);
void main()
{
	clrscr();
	push(100);
	push(3);
	push(20);
	printf("\n original stack \n");
	disp();
	reverse();
	printf("\n reversed stack \n");
	disp();
	getch();
}
void push(int ele)
{
	if(top>=9)
	{
		printf("\n stack is full");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
int pop()
{
	if(top<0)
	{
		printf("\n stack is Empty");
	}
	else
	{
		top--;
	}
	return stack[top+1];
}
void disp()
{
	int i;
	if(top<=-1)
	{
		printf("\n stack is Empty");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d ",stack[i]);
	}
}
void insertAtBt(int item)
{
	if(top<=-1)
	{
		push(item);
	}
	else
	{
		int top=pop();
		insertAtBt(item);
		push(top);
	}
}
void reverse()
{
	if(top!=-1)
	{
		int top=pop();
		reverse();
		insertAtBt(top);
	}
}

