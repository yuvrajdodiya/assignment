/*1. Write a C program to accept two integers and check whether they are equal
or not*/
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("\n %d and %d is equal",num1,num2);
	}
	else
	{
		printf("\n %d and %d is not eual",num1,num2);
	}
	return 0;
}
