/*6. Write a program in C to count the total number of alphabets, digits and special  characters in a string.*/
#include <stdio.h>
int main() 
{
    char input[100];
    int alphabets = 0, digits = 0, specialCharacters = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(input);

    while (input[i] != '\0') 
	{
        char c = input[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
		{
            alphabets++;
        } 
		else if (c>='0'&&c<='9') 
		{
            digits++;
        } 
		else if (c!=' '&&c!='\n') 
		{
            specialCharacters++;
        }
        i++;
    }
    
	printf("Total alphabets: %d\n",alphabets);
    printf("Total digits: %d\n",digits);
    printf("Total special characters: %d\n",specialCharacters);

    return 0;
}

