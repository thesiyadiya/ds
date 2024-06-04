#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char c;
	clrscr();
	fp=fopen("file.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	getch();
	fclose(fp);
}