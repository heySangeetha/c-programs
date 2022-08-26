#include<stdio.h>
void main()
{ 
	char s[200];
	int i=0,j=0,k,size,flag;
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		k++;
	}
	size=k;
	
	while(i<(k/2))
    {   
        if(s[i]!=s[j])
        {
	        flag=1;
            break;
        }
    	i++;
    	j--;
    }
	if(flag==0)
	printf("palindrome");
	else
	printf("not palindrome");
	
}
