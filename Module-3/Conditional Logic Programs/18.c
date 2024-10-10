/*18.Write a C program to calculate profit and loss on a transaction*/
#include<stdio.h>
int main()
{
    int cp, sp;
    printf("\nEnter the Cost of the product: ");
    scanf("%d",&cp);
    printf("Enter the Sell Price: ");
    scanf("%d",&sp);

    if(sp>cp)
    {
		printf("\nYou get Rs.%d profit",(sp-cp));
	}
    else
    {
    	printf("\nYou lossed Rs.%d",(cp-sp));
	}
    return 0;
}
