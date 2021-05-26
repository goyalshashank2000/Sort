#include<iostream.h>
#include<conio.h>
void sort(int a[][3],int n)
{
	int i,j,k,t;
	cout<<"\n\tSorted Array Element ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n-j-1;k++)
			{
				if(a[i][k]>a[i][k+1])
				{
					t=a[i][k];
					a[i][k]=a[i][k+1];
					a[i][k+1]=t;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			gotoxy((j+3)*4,i+12);
			cout<<a[i][j];
		}
	}
}
void main()
{
	int a[3][3],i,j;
	clrscr();
	cout<<"\n\tEnter 2-D Matrix Element's";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			gotoxy((j+3)*4,i+5);
			cin>>a[i][j];
		}
	}

	sort(a,3);
	getch();
}
