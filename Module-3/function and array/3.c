//3. WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>
void reverseStr(char[],int);
int main()
{
    char str[20];
    printf("\nEnter the String: ");
    scanf("%s", &str);

    printf("\nEnter the first string : %s", str);
    printf("\nReverse string : ");
    reverseStr(str, strlen(str) - 1);
    return 0;
}
void reverseStr(char str[], int n)
{
    if (n<0)
        return;

    printf("%c",str[n]);
    reverseStr(str,n-1);
}

