/*8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void reverseString(char str[]) 
{
    int i, n = strlen(str);
    for (int i = 0; i < n / 2; i++)
	{
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

bool isPalindrome(const char str[]) 
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) 
	{
        if (str[i] != str[n - i - 1]) 
		{
            return false;
        }
    }
    return true;
}

int main() 
{
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = '\0';

    char reversed[100];
    strcpy(reversed, str);
    reverseString(reversed);

   
    printf("Reversed string: %s\n", reversed);

    if (isPalindrome(str)) 
	{
        printf("The string is a palindrome.\n");
    }
	 else 
	{
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
