#include<stdio.h>
void main()
{
    int n,t,rev=0;

    printf("Enter the Number  to check for palindrome: ");
    scanf("%d",&n);
    t = n;
    while(t!= 0)
    {
	      rev = rev * 10 + (t % 10);
	      t = t / 10;
    }
    if(n == rev)
    {
	      printf("\nThe entered number is palindrome");
    }
    else
    {
	      printf("\nThe entered number is not a palindrome");
    }
}
