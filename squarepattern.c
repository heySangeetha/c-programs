#include<stdio.h>
void main()
{
	
	int i,j,n;
	scanf("%d",&n);
	int size=(2*n)-1;
	int a[size][size];
	int first=0,last=size-1;
	while(n>0)
	{
		for(i=first;i<=last;i++)
		{
			for(j=first;j<=last;j++)
			{
				if(i==first||i==last||j==first||j==last)
				a[i][j]=n;
			}
		}
		first++;
		last--;
		n--;
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
     	{
	    	printf("%d ",a[i][j]);
		}
		printf("\n");
		
   }
}
      
