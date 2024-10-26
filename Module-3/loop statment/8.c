//8. Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
#include<math.h>
int main()
{
    int num, rem, temp, max=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    temp=num;
    while(temp>0)
    {
        rem = temp%10;
        if(rem>max)
        {
        	max = rem;
		}
        temp /= 10;
    }
    printf("\nMaximum from %d is: %d",num,max);
    return 0;
}

