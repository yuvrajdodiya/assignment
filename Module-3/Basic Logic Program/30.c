//30.WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int days,years,month;
	printf("\nEnter the years = ");
	scanf("%d",&years);
	
	days  = years * 365; 
	
	printf("\n %d years in %d days ",years,days);
	
	printf("\nEnter the days = ");
	scanf("%d",&days);
	
	years = days/365 ;
	
	printf("\n %d days in %d years",days,years);
	
	
	
	return 0;
}
