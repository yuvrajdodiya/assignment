//17.Calculate person’s insurance premium based on salary
#include<stdio.h>
int main ()
{
	float salary;
	float rate;
	float pre ; 
	
	printf("\nEnter the person salary =  ");
	scanf("%f",&salary);
	if(salary <= 30000)
	{
		pre = 0.05;
	}
	else if (salary>=30000 && salary <= 60000)
	{
		pre = 0.10;
		
	}
	else 
	{
		pre = 0.15;
	}
	
	
	rate = salary * pre ;
	printf("\nYour insurance primium = %.2f",rate);
	return 0;
}
