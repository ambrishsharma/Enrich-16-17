#include <stdio.h>

int main(void) 
{
int n,a[10],i;
	scanf("%d",&a[10]);
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

