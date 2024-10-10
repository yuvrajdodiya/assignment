/*20.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/

#include<stdio.h>
int main ()
{
	int salary;
	float remaining_salary,	insurance_premium,loan_installment;
	printf("\nEnter the salary = ");
	scanf("%d",&salary);
	
	insurance_premium = salary* 0.10;
	loan_installment = salary * 0.10;
	
	remaining_salary = salary - (insurance_premium + loan_installment);
	
	printf("\nThe value of remaining salary is %2.f ",remaining_salary,insurance_premium,loan_installment);
	
	return 0;
}
