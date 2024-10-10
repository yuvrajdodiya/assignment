// 13.Write a program in C to remove characters from a string except alphabets ?
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i;

	printf("Enter your string = ");
	gets(ch);
	printf("New string = ");
	for(i=0;ch[i]!='\0';i++)
	{
		if ((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')|| (ch[i]==' '))
		{
			printf("%c",ch[i]);
		}
	}
	
	return 0;
}

