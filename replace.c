#include <stdio.h>
int main()
{
 int n,r,s=0,num;
 scanf("%d",&n);
 n=num;
 while(n!=0)
 {
  r=n%10;
  s=s+r;
  n=n/10;
 }
 if (num%s==0)
 printf("HARSHAD NUMBER");
 else
 printf("NOT HARSHAD NUMBER");
 return 0;
}
