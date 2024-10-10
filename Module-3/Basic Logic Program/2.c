/*2.Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/
#include<stdio.h>
int main ()
{
	int num1,num2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);	
	
	ans = num1 + num2;
	printf("\naddition of %d of %d is = %d",num1,num2,ans);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	printf("\nsubtraction of %d of %d is = %d",num1,num2,num1-num2);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	printf("\nmultiplication of %d of %d is = %d",num1,num2,num1*num2);

	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	printf("\ndivision of %2.f of %2.f is = %2.f",num1,num2,(float)num1/(float)num2);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	printf("\ndivision of %d of %d is = %d",num1,num2,num1%num2);

	
	return 0;
}
