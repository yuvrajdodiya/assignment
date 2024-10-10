//14. Write a program in C to combine two strings manually
#include<stdio.h>
void strc(char ch1[],char ch2[])
{
	int i=0,j=0;
	char st[100];
	for(i=0; ch1[i] != '\0'; i++)
	{
		st[j] = ch1[i];
		j++;
	}
	for(i=0; ch2[i] != '\0'; i++)
	{
		st[j] = ch2[i];
		j++;
	}
	st[j] = '\0';
	printf("%s",st);
}

int main()
{
	char ch1[100],ch2[100];
	int legnth,i=0,j=0;
	printf(" Enter first string : ");
	gets(ch1);
	printf("\n Enter second string :");
	gets(ch2);
	strc(ch1,ch2);
	return 0;
}
