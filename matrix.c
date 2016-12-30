#include<stdio.h>
int main()
{
    int i,j,k,m,n,a[100][100];
    printf("The number of rows and columns:");
    scanf("%d%d",&m,&n);
    printf("The value of k is");
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==k)
            {
            a[i][j]=1;
            } 
            else
            {
            a[i][j]=0;
            } 
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
 }
  
	
