#include<stdio.h>
void main()
{
	int n,r,s=0,num;
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	if(num%s==0)
	printf("Harshad Number");
	else
	printf("Not Harshad Number");
}
