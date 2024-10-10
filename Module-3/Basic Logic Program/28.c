//28.Convert years into days and months
#include<stdio.h>
int main()
{
	int years,days,month;
	
	printf("\nEnter the year = ");
	scanf("%d",&years);
	
	days = years * 365 ;
	month = days /  30;
	
	printf("\n%d years and %d month and %d days in years",years,month,days);
	return 0;
}
