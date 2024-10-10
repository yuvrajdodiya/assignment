/*6. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.*/
#include <stdio.h>
#include <ctype.h>  
int main() 
{
    char str[100];
    int a=0, d= 0,s= 0;
    int i=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
	{
        if (isalpha(str[i])) 
		{
        	a++;
        } 
		else if (isdigit(str[i])) 
		{
            d++;
        } 
		else if (!isspace(str[i]) && !ispunct(str[i])) 
		{
            s++;
        }
        i++;
    }

    printf("Total number of alphabets: %d\n",a);
    printf("Total number of digits: %d\n",d);
    printf("Total number of special characters: %d\n",s);

    return 0;
}
