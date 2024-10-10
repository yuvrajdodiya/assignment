//7. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[50],ch2[50];
	printf("Enter the name1:");
	gets(ch1);

	printf("Enter the name2:");
	gets(ch2);

	strcpy(ch1,ch2);

	printf("\nEnter the string of name1 is %s",ch1);
	printf("\nEnter the string of name2 is %s",ch2);

	return 0;
}

