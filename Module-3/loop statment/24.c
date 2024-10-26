//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
    int num, i, sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\nN numbers:  ");
	for(i=1; i<=num; i++)
    {
        printf(" %d,",i);
        sum += i;
    }
    printf("\nSum formula: (1 + 2 + 3 + 4 + 5 + 6 + ... + n)");
    printf("\nSum = %d\n",sum);
    return 0;
}

