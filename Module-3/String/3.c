//3.Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>
int main() 
{	
	char str[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("Characters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) 
	{
        printf("%c ", str[i]);
    }
	return 0;
}
