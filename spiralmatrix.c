#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
 		if(i%2==1)
		{
			for(j=1;j<=n;j++)
			{
				
				a[i][j]=x;
				x++;
			}
		}	
		else
		{
		    for(j=n;j>0;j--)
		    {
				a[i][j]=x;
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

