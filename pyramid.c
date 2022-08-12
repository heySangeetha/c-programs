#include<stdio.h>
void main()
{
	int i,j,n,k,l
	;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		    for(j=1;j<=i;j++)
	    	{
				printf("*");
	    	    printf("\n");
	        }
			for(i=n;i>=0;i--)
	        {
	        	for(j=1;j<=i;j++)
	        	{
	    	    	printf("*");
		     	}
	            printf("\n");
         	}
     }
	

}
