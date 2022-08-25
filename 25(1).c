#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	printf("Enter the string");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		count++;
	}
	printf("no 0f words=%d ",count+1);
}
