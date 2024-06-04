#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("filename.txt","w");
	clrscr();
	if(fp!=NULL)
	{
		printf("file created successfully");
	}
	else
	{
		printf("file is not created");
	}
	fclose(fp);
	getch();
}

