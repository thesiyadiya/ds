#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i,j,k,temp,changes;
	clrscr();
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n Unsorted array");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];
				a[j]=temp;
			}
			changes++;
		}
		if(changes==0)
		break;
	}
	printf("\n\n sorted array");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	getch();
}