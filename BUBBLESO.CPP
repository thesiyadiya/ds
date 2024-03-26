#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],temp,i,j,n,changes,k;
	clrscr();
	printf("\n Enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter array element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		changes=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				changes++;
			}
		}
		if(changes==0)
		break;
	}
	printf("\nAfter sorting array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
}