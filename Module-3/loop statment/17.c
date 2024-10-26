/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include <stdio.h>
int main()
{
    int num[5], i, odd=0, even=0;

    printf("\nEnter the 5 numbers");
    for (i = 0; i < 5; i++)
    {
        printf("Number[%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    i = 0;
    while (i < 5)
    {
        if (num[i] % 2 == 0)
        {
        	even ++;
		}
        else
        {
        	odd++;
		}
            

        i++;
    }

    i = 0;
    printf("\nNumbers= ");
    while (i < 5)
    {
        printf(" %d,", num[i]);
        i++;
    }
    printf("\n\nTotal %d Odd numbers are available",odd);
    printf("\nTotal %d Even numbers are available",even);
    return 0;
}

