#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	getch();
	clrscr();
	f=fopen("bscitsem1.txt","w");
	if(f==NULL)
	{
		printf("the file is not opened.the program will now exit.");
	}
	else
	{
		printf("\n file is created successfully!");
	}
	return 0;
}
