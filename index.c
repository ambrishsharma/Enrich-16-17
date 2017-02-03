#include <stdio.h>

int main(void) 
{
int n,a[10]={1,2,3,4,5,6,5,7,8,9},i;
scanf("%d",&n);
for(i=0;i<=10;i++)
{
    if(a[i]==n)
    {
        printf("%d\t",i);
    }
}
	return 0;
}

