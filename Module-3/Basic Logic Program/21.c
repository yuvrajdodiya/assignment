/*21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/
#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("\nnum1 is %d and num2 is %d  ",num2,num1);
	
	return 0;
}

