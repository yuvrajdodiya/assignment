//4. WAP to print table up to given numbers
#include<stdio.h>
int main()
{
    int num, i;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\n");
    for(i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d",num,i,(num*i));
    }
    return 0;
}
