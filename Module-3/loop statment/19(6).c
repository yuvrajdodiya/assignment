/*A
 A B
 A B C
 A B C D
 A B C D E*/
#include <stdio.h>
int main()
{
    char k ='A';
    int i,j;

    for (i=0;i<5;i++)
    {
        k ='A';
        for(j=0;j<=i;j++)
        {
            printf(" %c",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}

