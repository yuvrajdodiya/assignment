//19.Calculate compound interest

#include<stdio.h>
#include<math.h>

int main ()
{
	double principal,rate,amount,ci;
	int year;
	
	printf("\nEnter the value of principal = ");
	scanf("%lf",&principal);
	printf("\nEnter the value of rate of interest  = ");
	scanf("%lf",&rate);
	
	printf("\nEnter the value of year = ");
	scanf("%ld",&year);
	
	rate = pow((1 + rate / 100 ) , year );
	
	amount = principal * rate;
	printf("\nThe amount is = %lf",amount);
	
	ci = amount - principal;
	printf("\nThe value of ci (compound interest) = %f ",ci,amount,principal);	
	return 0;	
}
