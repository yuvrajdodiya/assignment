//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
	int num; 
	printf("\nEnter the number =  ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("\n%d is a negative number ",num);
	}
	else if(num>0)
	{
		printf("\n%d is a positive number ",num);
	}
	else
	{
		printf("  zero ",num);
	}
	return 0;
}
