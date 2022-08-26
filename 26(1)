#include<stdio.h>
#include<string.h>
void main()
{
	char s[200];
	gets(s);
	int i,u=0,l=0,n=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
		u=u+1;
		else if(islower(s[i]))
		l=l+1;
		else if(isdigit(s[i]))
		n=n+1;     
	}
	printf("Count of uppercase characters: %d\n",u);
	printf("Count of lowercase characters: %d\n",l);
	printf("Count of numbers: %d",n);
}
