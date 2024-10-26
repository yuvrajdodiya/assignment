/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include<stdio.h>
int main()
{
    int num[10], odd=0, even=0, oddsum=0, evensum=0, i;
	printf("\nEnter the values of numbers  ");
    for(i=0; i<10; i++)
    {
        printf("num[%d]: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nValues of 10 numbers  ");
    for(i=0; i<10; i++)
    {
        printf(" %d,",num[i]);
    }

    for(i=0; i<10; i++)
    {
        if(num[i]%2==0)
        {
            evensum += num[i];
            even ++;
        }
        else
        {
            oddsum += num[i];
            odd ++;
        }
    }
    printf("\n\nTotal %d Even numbers are available, Sum = %d",even,evensum);
    printf("\nTotal %d Odd numbers are available, Sum = %d",odd,oddsum);
    return 0;
}
