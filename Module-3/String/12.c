// 12.Write a program in C to find the number of times a given word 'is' appears in the given string ?
#include <stdio.h>
#include <string.h>
int main() 
{
    char ch[100];
    int count = 0,i;

    printf("Enter a string = ");
    gets(ch);

    for (i = 0; ch[i] != '\0'; i++) 
	{
        if (ch[i] == 'i' && ch[i + 1] == 's' && (ch[i - 1] == ' ' || i == 0) &&
		 (ch[i + 2] == ' ' || ch[i + 2] == '\0')) 
		{
            count++;
        }
    }
    printf("\nThe word  appears times of = %d ", count);
    
    return 0;
}

