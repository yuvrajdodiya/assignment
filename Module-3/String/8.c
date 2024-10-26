//8.Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
int main() 
{
    char str[100];
    int vowel = 0, cons = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
	{
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			{
				vowel++;
        	}
		
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
            cons++;
        }
    }

    	printf("Number of vowels: %d\n", vowel);
   		printf("Number of consonants: %d\n", cons);

    return 0;
}
