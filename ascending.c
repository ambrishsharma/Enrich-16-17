#include <stdio.h>
int main () 
{ 
Int i,j,s,x,a[10],y=0;
printf ("\nenter the number");
scanf("\n%d",&n);
 while(n>0)
  {
    r=n%10;
   n=n/10;
   a[y]=x;
    y++;
 } 
 for(i=0;i<y;i++) 
 {
  for(j=i+1;j<y;j++)
  {
  if(a[i]>a[j]) 
  {
  s=a[i];
   a[i]=a[j];
   a[j]=s;
  }
 } 
 for(i=0;i<y;i++) 
  {
       printf("\nThe ascending order is ",a[y]);
  } 
}
return 0;
} 
