//33. WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
	 int day;
    printf("\nEnter the Week number(1-7) = ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("\nMonday");
	}
    else if (day == 2)
    { 
	    printf("\nTuesday");
	}
    else if (day == 3)
    {
	 
	    printf("\nWednesday");
	}
    else if (day == 4)
    {
	    printf("\nThursday");
	}
    else if (day == 5)
    {
	    printf("\nFriday");
	}
    else if (day == 6)
    {
	    printf("\nSaturday");
	}
	
    else if (day == 7)
    {
        printf("\nSunday");
    }

    else
    {
	    printf("\nInvalid week number.");
	}
	return 0;
}
