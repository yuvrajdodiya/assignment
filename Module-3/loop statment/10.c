//10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include <stdio.h>
int main()
{
    int num, temp, rem, firstEle, lastEle, sum;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        if(temp==num)
        {
        	lastEle = rem;
		}
        else if((temp/10)==0)
        {
        	firstEle = rem;
		}
        temp /= 10;
    }
    sum = firstEle+lastEle;
    printf("\nSum of first & last element of %d is:\t\t(%d + %d) = %d\n",num,firstEle,lastEle,sum);
    return 0;
}

