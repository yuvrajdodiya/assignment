//4. WAP to find factorial using recursion
#include<stdio.h>
int find(int);
int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\nFactorial of %d is: %d\n",num,find(num));
    return 0;
}

int find(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*find(n-1);
}
