//15.Convert school’s name in abbreviated form
#include<stdio.h>
#include<conio.h>
int main()
{
    char first[20],last[20];
    printf("\nEnter First and Last Name of the School: ");
    scanf("%s %s",&first,&last);

    printf("\nSchool Name in Abbreviated form\n");
    printf("%c. %c. School",first[0],last[0]);
}
