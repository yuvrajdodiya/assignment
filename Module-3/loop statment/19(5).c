/*
 1
 2  3
 4  5  6
 7  8  9  10
 11 12 13 14 15 
*/
#include <stdio.h>
int main()
{
    int i, j, k = 1;
	for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 4)
                printf(" %d", k);

            else
                printf(" %d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}

