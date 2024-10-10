//15.Calculate sum of 10 numbers using of while loop
#include <stdio.h>
int main()
{
    int i=1, sum=0;

    while(i<=10)
    {
      sum += i;
      i++;
    }
    printf("\nSum of first 10 nums = %d",sum);
    return 0;
}

