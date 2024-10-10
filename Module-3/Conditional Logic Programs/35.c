/*35.Accept the input month number and print number of days in that
month.*/
#include<stdio.h>
int main()
{
	int month;
	printf("\nEnter the month number(1-12) = ");
	scanf("%d",&month);	
	
	if (1 > month || month< 12)
	{
		printf("Invalid month ");
    }
	 else
	 {
	 	 if (month == 2) 
		{
            printf(" 28 and 29 days in that month ");
        } 
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
            printf("\n 30 days in that month ");
        }
		 else {
            printf("\n 31 days in that month ");
        }
	 }
	

	return 0;
	
}


