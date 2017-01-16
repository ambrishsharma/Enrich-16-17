#include <stdio.h>
int main(void) {
    int n,t=0,i=0;
    scanf("%d",&n);
    while(i<n)
    {
        t=t+(i+1);
        i++;
        printf("%d\t",t);
    }
    return 0;
}
