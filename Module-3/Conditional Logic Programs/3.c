//3. WAP to check if the given year is a leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year = ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\n %dyear is a leap year  ",year);
	}
	else 
	{
		printf("\n%d year is a not leap year ",year);
	}
	return 0;
}
