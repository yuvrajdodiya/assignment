//29.Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	int minutes,seconds,hours;
	
	printf("\nEnter the minutes = ");
	scanf("%d",&minutes);
	
	seconds = minutes * 30 ; 
	minutes = hours * 30;
	
	printf("\n%d is minutes and % is seconds %d hours",minutes,seconds,hours);
	return 0;
}
