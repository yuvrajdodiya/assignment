/*31. Write a program in C to read any Month Number in integer and display the
number of days for this month.
*/
#include<stdio.h>
int main()
{
    int month;
    printf("\nEnter the month number (1-12) =  ");
    scanf("%d",&month);

    if(month==2)
    {
		printf("\n28days in month %d",month);
	}
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {	
		printf("\n31 of days in month %d",month);
	}
    else if(month==4 || month==6 || month==9 || month==11)
    {
    	printf("\n30 days in month %d",month);
	}
	else
	{
		printf("/nINVALID MONTH");
	}
	return 0;
}

