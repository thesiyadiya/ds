#include<stdio.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fp;
	char str[10];
	clrscr();
	fp=fopen("file.txt","r");
	fgets(str,10,fp);
	printf("%s",str);
	getch();
	fclose(fp);
}