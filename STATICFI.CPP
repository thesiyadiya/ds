#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	clrscr();
	fp=fopen("file.txt","w");
	if(fp!=NULL)
	{
		printf("file create");
	}
	else
	{
		printf("file is not create");
	}
	fprintf(fp,"this is demo file");
	fclose(fp);
	getch();
}