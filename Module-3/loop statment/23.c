//23. C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
int main()
{	
	int num, rev=0, rem, i;
	printf("Enter the number: ");
    scanf("%d", &num);

    for(i=num; i>0; i/=10)
    {
        rem = i%10;
        rev = (rev*10)+rem;
    }
    printf("\noriginal Number: %d",num);
    printf("\nreversed Number: %d",rev);
    return 0;
}
