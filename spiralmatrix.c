#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],i,j,n,x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==1)
			{
				a[i][j]=x;
				x++;
			}
			else
			{
				a[i][n+1-j]=x;
				x++;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
