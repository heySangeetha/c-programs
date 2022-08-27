#include<stdio.h>
#include<string.h>
void main()
{
	char a1[100],a2[100];
	int i,j,count=0;
	printf("Enter two strings:\n");
	gets(a1);gets(a2);
	int n1=strlen(a1);
	int n2=strlen(a2);
	if(n1!=n2)
	printf("Not Anagrams");
	else{
            for(i=0;i<n1-1;i++)
         	{
	        	for(j=0;j<n1-i-1;j++)
	         	{
		        	if(a1[j]>a1[j+1])
		          	{
		               char t=a1[j];
			           a1[j]=a1[j+1];
				       a1[j+1]=t;
                    }
	        	}
	        }
	        for(i=0;i<n2-1;i++)
         	{
	         	for(j=0;j<n2-i-1;j++)
	          	{
		        	if(a2[j]>a2[j+1])
		        	{
                       char temp=a2[j];
			           a2[j]=a2[j+1];
				       a2[j+1]=temp;
					}
		        }
	    	}
			for(i=0;a1[i]!='\0';i++)
        	{
	        	if(a1[i]==a2[i]) 
	        	count=count+1;
        	}
        	if(count==n1)
        	printf("ANAGRAM");
        	else
        	printf("NOT ANAGRAM");
       }
}	

	
	
	

