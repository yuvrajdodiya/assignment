//16.Convert country’s name in abbreviate form
#include<stdio.h>
#include<conio.h>
int main()
{
    char first[20],last[20];
    printf("\nEnter First and Last Name of country : ");
    scanf("%s %s",&first,&last);

    printf("\ncountry Name in Abbreviated form\n");
    printf("%c. %c. country ",first[0],last[0]);
}
