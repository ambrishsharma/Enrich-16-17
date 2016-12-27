#include<stdio.h>
int main()
{
int r=0,n;
clrscr();
printf("enter the numbers to be reversed");
scanf("%d",&n);
printf("the reversed number is");
while(n!=0)
{
r=n%10;
n=n/10;
printf("%d",r);
}
getch();
}
