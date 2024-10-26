//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
int l(char s[])
{
	int len=0,i;
	for(i=0;s[i]!='\0';i++)
	{
		len++;//5
	}
	return len;
}
int main()
{
	char s[50];
	printf("\nEnter the string = ");
	gets(s);
	printf("\nOriginal string = %s",s);
	int len = l(s);
	printf("\nLength of string = %d",len);
	return 0;
}
