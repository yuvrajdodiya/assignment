//13.WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>
int main()
{
    int n1, n2, n3, max;
    printf("Enter the num1: ");
    scanf("%d", &n1);
    printf("Enter the num2: ");
    scanf("%d", &n2);
    printf("Enter the num3: ");
    scanf("%d", &n3);

    max = (n1<n2 && n1<n3)?n1:(n2<n1 && n2<n3)?n2:n3;
    printf("\n%d is minimum ",max,n1,n2,n3);
    return 0;
}
