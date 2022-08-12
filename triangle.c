#include<stdio.h>
void main()
{
	int i,j,n;
	char ch='A';
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2c",ch);
			ch++;
		}
		printf("\n");
	}
}
