#include<stdio.h>
void main()
{
  int a[100],n,i,b,c=0;
  printf("The total number of elements:");
  scanf("%d",&n);
  printf("The array is:");
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }  
  printf("The number to be found:");
  scanf("%d",&b);
  for(i=0;i<n;i++)
   {
     if(a[i]==b)
      { 
        c++;
 
      }
   }
  printf("The number of times the given number repeated is %d",c);
}
