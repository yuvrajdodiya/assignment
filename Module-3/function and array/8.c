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
    int i,n = strlen(str);
    for (int i=0;i<n/2; i++)
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

   
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = '\0';

    char reversed[100];
    strcpy(reversed, str);
    reverseString(reversed);

   
    printf("\nReversed string: %s", reversed);
    
    if (isPalindrome(str)) 
	{
        printf("\nThe string is a palindrome.");
    }
	 else 
	{
        printf("\nThe string is not a palindrome.");
    }

    return 0;
}
