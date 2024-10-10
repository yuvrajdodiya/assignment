/*4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("\nChoices...");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");

    printf("\n\nEnter your Choice: ");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n the Addition of %d and %d is = %d",num1,num2,(num1+num2));
    }
    else if(choice==2)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\nthe Subtraction is %d and %d is = %d",num1,num2,(num1-num2));
    }
    else if(choice==3)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\nthe Multiplication is %d and  %d is = %d",num1,num2,(num1*num2));
    }
    else if(choice==4)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n the Division is %d and %d is = %d",num1,num2,(num1/num2));
    }
    else if(choice==5)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\nthe Remainder is %d and %d is = %d",num1,num2,(num1%num2));
    }
    return 0;
}
