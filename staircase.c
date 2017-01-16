
#include <stdio.h>
int main(void) {
    int n,a[10][10],i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((j==0)||(i==j)||(i==1))
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=i+1;
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
