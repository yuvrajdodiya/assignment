//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{	int length = 0;
	char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') 
	{
        length++;
    }
	  printf("Length of the string: %d\n", length);

    return 0;
}
