#include <stdio.h>
int main() 
{
int n,a[10][10],i,j,x;
printf("size=");
scanf("%d",&n);
if(n%2==0)
{
    printf("enter the odd number");
}
else
{
    i=0,j=n/2;
for(x=1;x<=n*n;x++)
{
    a[i][j]=x;
    
    j++;
    if(i==-1)
    {
        i=n-1;
    }
    if(j==n)
    {
        j=0;
    }
    if(a[i][j]>0)
    {
        i=(i+2)%n;
        j--;
    }
    if(j==-1)
    {
        j=n-1;
    }
    }
}
return 0;
}
