//10.WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int main() 
{	int num,reverse=0,rem;
	printf("Enter the number = ");
	scanf("%d",&num);
	int copy = num;
	
	while(num!=0)
	{
		rem = num % 10;
		reverse = (reverse * 10 ) + rem;
		num = num / 10;
	}
	if(reverse == copy)
	{
		printf("\nThe pallindron number is %d ",copy);
	}
	else
	{
			printf("\nThe not pallindron number is %d",copy);
	}
	return 0;
}
