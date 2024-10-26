//9. Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
	printf("Enter a string = ");
    gets(str);

    str[strcspn(str, "\n")] = '\0';
	int length = strlen(str);
	printf("\nThe maximum number of characters in the string is: %d", length);

    return 0;
}
