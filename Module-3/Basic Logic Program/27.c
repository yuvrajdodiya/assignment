//27.Convert days into months
#include<stdio.h>
int main()
{
	int month,days;
	
	printf("\nEnter the days = ");
	scanf("%d",&days);
	
	month = days / 30;
	days = days % 30 ;
	
	printf("\n %d month and %d days",month,days);
	
	return 0;
}
